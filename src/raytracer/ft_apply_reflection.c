/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_reflection.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/15 16:35:40 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/25 11:33:59 by rdavid           ###   ########.fr       */
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

void					ft_apply_reflection(t_object *o, t_ldata *ld,
											t_tdata *td, const int c)
{
	t_ray				r;
	int					i;

	r.s = td->hp;
	ft_get_surface_normal(&ld->n, td, o, &td->hp);
	ft_get_view_vector(&ld->v, &td->s->cam->p, &td->hp);
	ft_get_reflection_vector(&r.v, &ld->n, &ld->v, 1);
	ft_op_get_n_vec(&r.v, &r.nv);
	td->no_check = o;
	if (ft_ray_tracer(td, &r, 2147483647.0, c + 1))
	{
		i = -1;
		while (++i < 3)
		{
			td->fc[i] = td->fc[i] * (1.0 - o->krl) + td->rc[i] * o->krl;
			ft_check_light(&td->fc[i]);
		}
	}
}
