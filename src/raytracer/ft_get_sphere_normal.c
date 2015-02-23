/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_sphere_normal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/15 15:41:41 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/24 06:46:31 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

inline static void		ft_op_sub_vec(register t_cd *const v,
										register const t_cd *const v1,
										register const t_cd *const v2)
{
	v->x = v1->x - v2->x;
	v->y = v1->y - v2->y;
	v->z = v1->z - v2->z;
}

void					ft_get_sphere_normal(register t_cd *const v_n,
											register const t_tdata *const td,
											register const t_object *const o,
											register const t_cd *const hp)
{
	(void)td;
	ft_op_sub_vec(v_n, hp, &o->p);
}
