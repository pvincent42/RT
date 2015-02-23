/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_refraction.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/15 16:38:15 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/25 11:34:19 by rdavid           ###   ########.fr       */
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

void					ft_apply_refraction(t_object *o, t_tdata *td,
											t_ray *ray)
{
	t_ray				r;
	int					i;

	r.s = td->hp;
	r.v = ray->nv;
	ft_op_get_n_vec(&r.v, &r.nv);
	td->no_check = o;
	if (ft_ray_tracer(td, &r, 2147483647.0, 1000))
	{
		i = -1;
		while (++i < 3)
		{
			td->fc[i] = td->fc[i] * (1.0 - o->kt) + td->rc[i] * o->kt;
			ft_check_light(&td->fc[i]);
		}
	}
}
