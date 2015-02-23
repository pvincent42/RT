/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perlin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/01 10:07:06 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/26 12:43:27 by pvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <rt.h>

inline static void				ft_set_ci(t_ci *c,
										const int x,
										const int y,
										const int z)
{
	c->x = x;
	c->y = y;
	c->z = z;
}

inline static double			fade(const double t)
{
	return (t * t * t * (t * (t * 6 - 15) + 10));
}

inline static double			lerp(const double t,
									const double a,
									const double b)
{
	return (a + t * (b - a));
}

inline static double			grad(const int hash,
									const double x,
									const double y,
									const double z)
{
	int							h;
	double						u;
	double						v;
	double						r;

	h = hash & 15;
	r = h == 12 || h == 14 ? x : z;
	u = h < 8 ? x : y;
	v = h < 4 ? y : r;
	if ((h & 1) == 0)
		r = u;
	else
		r = -u;
	if ((h & 2) == 0)
		r += v;
	else
		r += -v;
	return (r);
}

double							ft_noise(const int *prm,
										double x, double y, double z)
{
	t_ci						v;
	t_cd						u;
	t_ci						a;
	t_ci						b;

	ft_set_ci(&v, (int)floor(x) & 255, (int)floor(y) & 255,
				(int)floor(z) & 255);
	x -= floor(x);
	y -= floor(y);
	z -= floor(z);
	u = ft_set_vec(fade(x), fade(y), fade(z));
	a.x = prm[v.x] + v.y;
	a.y = prm[a.x] + v.z;
	a.z = prm[a.x + 1] + v.z;
	b.x = prm[v.x + 1] + v.y;
	b.y = prm[b.x] + v.z;
	b.z = prm[b.x + 1] + v.z;
	return (lerp(u.z, lerp(u.y, lerp(u.x, grad(prm[a.y], x, y, z),
	grad(prm[b.y], x - 1, y, z)),
	lerp(u.x, grad(prm[a.z], x, y - 1, z),
	grad(prm[b.z], x - 1, y - 1, z))),
	lerp(u.y, lerp(u.x, grad(prm[a.y + 1], x, y, z - 1),
	grad(prm[b.y + 1], x - 1, y, z - 1)),
	lerp(u.x, grad(prm[a.z + 1], x, y - 1, z - 1),
	grad(prm[b.z + 1], x - 1, y - 1, z - 1)))));
}
