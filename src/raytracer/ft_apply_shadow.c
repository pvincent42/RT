/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_shadow.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/15 16:30:32 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/25 11:34:39 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <rt.h>

inline static void		ft_op_get_n_vec(t_cd *v, t_cd *n_v)
{
	const double		hypo = sqrt(v->x * v->x + v->y * v->y + v->z * v->z);

	n_v->x = v->x / hypo;
	n_v->y = v->y / hypo;
	n_v->z = v->z / hypo;
}

inline static void		ft_op_get_vec(t_cd *v, t_cd *start, t_cd *end)
{
	v->x = end->x - start->x;
	v->y = end->y - start->y;
	v->z = end->z - start->z;
}

int						ft_apply_shadow(t_tdata *td, t_object *l,
										const double at_dist)
{
	t_ray	r;

	r.s = td->hp;
	r.d = l->p;
	ft_op_get_vec(&r.v, &r.s, &r.d);
	ft_op_get_n_vec(&r.v, &r.nv);
	if (ft_ray_tracer(td, &r, at_dist, 100) == -1)
		return (1);
	return (0);
}
