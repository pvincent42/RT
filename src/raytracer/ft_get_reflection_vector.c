/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_reflection_vector.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/15 14:51:04 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/25 04:12:47 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

inline static double	ft_op_dot_vec(register double *const dot,
										register const t_cd *const v1,
										register const t_cd *const v2,
										register const int *const status)
{
	*dot = v1->x * v2->x + v1->y * v2->y + v1->z * v2->z;
	if (*status == 0)
	{
		if (*dot < 0.0)
			return (0.0);
	}
	return (*dot);
}

void					ft_get_reflection_vector(register t_cd *const v_r,
												register const t_cd *const v_n,
												register const t_cd *const v_l,
												const int status)
{
	register const double	dot_ln = ft_op_dot_vec(&v_r->x, v_l,
													v_n, &status) * 2;

	v_r->x = v_n->x * dot_ln - v_l->x;
	v_r->y = v_n->y * dot_ln - v_l->y;
	v_r->z = v_n->z * dot_ln - v_l->z;
}
