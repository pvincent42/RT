/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_half_sphere.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjeannin <hjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/21 15:22:32 by hjeannin          #+#    #+#             */
/*   Updated: 2014/03/26 13:14:24 by pvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>
#include <math.h>

static double			ft_calc_half_sphere(const t_object *o,
											t_ray *r, t_cd *cs)
{
	double				tmp;

	cs->x = pow(r->nv.x, 2) + pow(r->nv.y, 2) + pow(r->nv.z, 2);
	cs->y = 2 * (r->nv.x * (r->s.x - o->p.x) + r->nv.y
				* (r->s.y - o->p.y) + r->nv.z
				* (r->s.z - o->p.z));
	cs->z = (pow(r->s.x - o->p.x, 2)
			+ pow(r->s.y - o->p.y, 2)
			+ pow(r->s.z - o->p.z, 2) - o->r2);
	tmp = pow(cs->y, 2) - (4 * cs->x * cs->z);
	return (tmp);
}

static double			ft_check_valor(const t_object *o, t_tdata *td,
										t_ray *r, double *dist)
{
	double			alpha1;
	double			alpha2;
	t_cd			centerhp;
	t_cd			hitpoint;

	hitpoint = ft_get_hitpoint(&r->s, dist[1], &r->nv);
	centerhp = ft_sub_vec(hitpoint, o->p);
	alpha2 = ft_dot_vec(o->n, centerhp);
	hitpoint = ft_get_hitpoint(&r->s, dist[0], &r->nv);
	centerhp = ft_sub_vec(hitpoint, o->p);
	alpha1 = ft_dot_vec(o->n, centerhp);
	if (alpha2 > 0.0)
	{
		td->side = OUTSIDE;
		return (dist[1]);
	}
	else if (alpha1 > 0.0)
	{
		td->side = INSIDE;
		return (dist[0]);
	}
	return (-1);
}

double					ft_half_sphere(const t_object *o, t_tdata *td,
										const t_scene *s, t_ray *r)
{
	double			tmp;
	double			dist[2];
	t_cd			cs;

	(void)s;
	cs = ft_set_vec(0, 0, 0);
	tmp = ft_calc_half_sphere(o, r, &cs);
	if (tmp < 0.0)
		return (-1);
	dist[0] = (-cs.y + sqrt(tmp)) / (2 * cs.x);
	dist[1] = (-cs.y - sqrt(tmp)) / (2 * cs.x);
	return (ft_check_valor(o, td, r, dist));
}
