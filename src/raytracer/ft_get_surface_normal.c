/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_surface_normal.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/15 14:57:49 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/26 13:15:56 by pvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <rt.h>

inline static void		ft_op_get_n_vec(register t_cd *const v)
{
	const double		hypo = sqrt(v->x * v->x + v->y * v->y + v->z * v->z);

	v->x = v->x / hypo;
	v->y = v->y / hypo;
	v->z = v->z / hypo;
}

void					ft_get_surface_normal(register t_cd *const v,
												register const t_tdata *const td,
												register const t_object *const o,
												register const t_cd *const hp)
{
	static const t_object_normal	object_normal[] =
	{
		{ &ft_get_sphere_normal },
		{ &ft_get_cylinder_normal },
		{ &ft_get_object_normal },
		{ &ft_get_object_normal },
		{ &ft_get_object_normal },
		{ &ft_get_half_sphere_normal },
		{ &ft_get_quadric_normal },
		{ &ft_get_object_normal },
		{ &ft_get_tetrahedron_normal }
	};

	object_normal[o->type].f(v, td, o, hp);
	ft_op_get_n_vec(v);
	if (o->ns.normal)
		ft_get_normal_perturbation(v, td, o);
}
