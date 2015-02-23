/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetrahedron.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjeannin <hjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/05 14:05:56 by hjeannin          #+#    #+#             */
/*   Updated: 2014/03/26 20:49:48 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

inline static double		ft_short_distance(double dist[4])
{
	int						i;
	double					res;
	double					res2;
	int						tmp_i;

	i = -1;
	res = -1;
	while (++i < 4)
	{
		tmp_i = (i + 1) % 4;
		if (dist[i] == -1)
			dist[i] = 2147483647;
		if (dist[tmp_i] == -1)
			dist[tmp_i] = 2147483647;
		res2 = dist[i] < dist[tmp_i] ? dist[i] : dist[tmp_i];
		if (res == -1)
			res = res2;
		if (res2 < res)
			res = res2;
	}
	return (res);
}

inline static void			ft_assign_last_triangle(t_object *t,
								const t_object *o)
{
	t->q1 = o->tb;
	t->q2 = o->tc;
	t->q3 = o->td;
	t->p = o->tb;
	t->n = o->tn4;
}

double						ft_tetrahedron(const t_object *o, t_tdata *td,
											const t_scene *s, t_ray *r)
{
	double					dist[4];
	t_object				op;

	op.q1 = o->ta;
	op.q2 = o->tb;
	op.q3 = o->tc;
	op.p = o->ta;
	op.n = o->tn1;
	dist[0] = ft_triangle(&op, td, s, r);
	op.q1 = o->ta;
	op.q2 = o->tb;
	op.q3 = o->td;
	op.p = o->ta;
	op.n = o->tn2;
	dist[1] = ft_triangle(&op, td, s, r);
	op.q1 = o->ta;
	op.q2 = o->tc;
	op.q3 = o->td;
	op.p = o->ta;
	op.n = o->tn3;
	dist[2] = ft_triangle(&op, td, s, r);
	ft_assign_last_triangle(&op, o);
	dist[3] = ft_triangle(&op, td, s, r);
	return (ft_short_distance(dist));
}
