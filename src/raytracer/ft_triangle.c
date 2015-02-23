/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_triangle.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjeannin <hjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/03 22:40:26 by hjeannin          #+#    #+#             */
/*   Updated: 2014/03/26 12:36:58 by pvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

static double			ft_calc_triangle(t_object *o, double dist,
										t_ray *r)
{
	t_cd			qhp;
	t_cd			qq;
	t_cd			qqqhp;
	t_cd			hitpoint;

	hitpoint = ft_get_hitpoint(&r->s, dist, &r->nv);
	qhp = ft_get_vector(&o->q1, &hitpoint);
	qq = ft_get_vector(&o->q1, &o->q2);
	qqqhp = ft_cross_vec(qq, qhp);
	if (ft_dot_vec(o->n, qqqhp) < 0.0)
		return (-1);
	qhp = ft_get_vector(&o->q2, &hitpoint);
	qq = ft_get_vector(&o->q2, &o->q3);
	qqqhp = ft_cross_vec(qq, qhp);
	if (ft_dot_vec(o->n, qqqhp) < 0.0)
		return (-1);
	qhp = ft_get_vector(&o->q3, &hitpoint);
	qq = ft_get_vector(&o->q3, &o->q1);
	qqqhp = ft_cross_vec(qq, qhp);
	if (ft_dot_vec(o->n, qqqhp) < 0.0)
		return (-1);
	return (dist);
}

double					ft_triangle(const t_object *o, t_tdata *td,
								const t_scene *s, t_ray *r)
{
	double			dist;

	dist = ft_plane((t_object *)o, td, s, r);
	if (dist != -1)
		return (ft_calc_triangle((t_object *)o, dist, r));
	return (-1);
}
