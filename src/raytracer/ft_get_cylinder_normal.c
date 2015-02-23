/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_cylinder_normal.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/15 15:46:36 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/26 13:15:04 by pvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <rt.h>

inline static void		ft_op_sub_vec(register const t_cd *const v1,
										register t_cd *const v2)
{
	v2->x = v1->x - v2->x;
	v2->y = v1->y - v2->y;
	v2->z = v1->z - v2->z;
}

inline static double	ft_dpow2(register const double n)
{
	return (n * n);
}

inline static double	ft_op_dist(register const t_cd *const p1,
									register const t_cd *const p2,
									register const double *const n)
{
	return (sqrt(ft_dpow2(sqrt(ft_dpow2(p1->x - p2->x)
							+ ft_dpow2(p1->y - p2->y)
							+ ft_dpow2(p1->z - p2->z))) - *n));
}

void					ft_get_cylinder_normal(register t_cd *const v_n,
												register const t_tdata *const td,
												register const t_object *const o,
												register const t_cd *const hp)
{
	(void)td;
	v_n->z = ft_op_dist(hp, &o->p, &o->r2);
	v_n->x = o->p.x + o->n.x * v_n->z;
	v_n->y = o->p.y + o->n.y * v_n->z;
	v_n->z = o->p.z + o->n.z * v_n->z;
	ft_op_sub_vec(hp, v_n);
}
