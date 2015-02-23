/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quadric.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/15 17:40:48 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/26 12:42:52 by pvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>
#include <math.h>

inline static double		ft_quadric_a(const t_object *o, t_ray *r)
{
	t_cd		v1;
	t_cd		v2;

	v1.x = r->nv.x * r->nv.x;
	v1.y = r->nv.y * r->nv.y;
	v1.z = r->nv.z * r->nv.z;
	v2.x = 2 * r->nv.x * r->nv.y;
	v2.y = 2 * r->nv.y * r->nv.z;
	v2.z = 2 * r->nv.x * r->nv.z;
	return (ft_dot_vec(o->q1, v1)
	+ ft_dot_vec(o->q2, v2));
}

inline static double		ft_quadric_b(const t_object *o, t_ray *r)
{
	t_cd		v3;
	t_cd		v4;
	t_cd		v5;

	v3.x = 2 * (r->s.x - o->p.x) * r->nv.x;
	v3.y = 2 * (r->s.y - o->p.y) * r->nv.y;
	v3.z = 2 * (r->s.z - o->p.z) * r->nv.z;
	v4.x = 2 * (r->nv.x * (r->s.y - o->p.y) + (r->s.x - o->p.x) * r->nv.y);
	v4.y = 2 * (r->nv.y * (r->s.z - o->p.z) + (r->s.y - o->p.y) * r->nv.z);
	v4.z = 2 * (r->nv.x * (r->s.z - o->p.z) + (r->s.x - o->p.x) * r->nv.z);
	v5.x = 2 * r->nv.x;
	v5.y = 2 * r->nv.y;
	v5.z = 2 * r->nv.z;
	return (ft_dot_vec(o->q1, v3)
	+ ft_dot_vec(o->q2, v4)
	+ ft_dot_vec(o->q3, v5));
}

inline static double		ft_quadric_c(const t_object *o, t_ray *r)
{
	t_cd		v6;
	t_cd		v7;
	t_cd		v8;

	v6.x = (r->s.x - o->p.x) * (r->s.x - o->p.x);
	v6.y = (r->s.y - o->p.y) * (r->s.y - o->p.y);
	v6.z = (r->s.z - o->p.z) * (r->s.z - o->p.z);
	v7.x = 2 * (r->s.x - o->p.x) * (r->s.y - o->p.y);
	v7.y = 2 * (r->s.y - o->p.y) * (r->s.z - o->p.z);
	v7.z = 2 * (r->s.x - o->p.x) * (r->s.z - o->p.z);
	v8.x = 2 * (r->s.x - o->p.x);
	v8.y = 2 * (r->s.y - o->p.y);
	v8.z = 2 * (r->s.z - o->p.z);
	return (ft_dot_vec(o->q1, v6)
	+ ft_dot_vec(o->q2, v7)
	+ ft_dot_vec(o->q3, v8) + o->r);
}

double						ft_quadric(const t_object *o, t_tdata *td,
										const t_scene *s, t_ray *r)
{
	t_cd		c;
	double		tmp;
	double		dist1;
	double		dist2;

	(void)td;
	(void)s;
	c.x = ft_quadric_a(o, r);
	c.y = ft_quadric_b(o, r);
	c.z = ft_quadric_c(o, r);
	tmp = c.y * c.y - (4 * c.x * c.z);
	if (tmp < 0.0)
		return (-1);
	c.y = -c.y;
	tmp = sqrt(tmp);
	c.x += c.x;
	dist1 = (c.y + tmp) / c.x;
	dist2 = (c.y - tmp) / c.x;
	if (dist1 <= dist2 && dist1 > 0.0)
		return (dist1);
	if (dist1 > dist2 && dist2 > 0.0)
		return (dist2);
	return (-1);
}
