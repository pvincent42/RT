/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_light_vector.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/15 14:56:32 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/25 04:37:51 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <rt.h>

inline static void		ft_op_sub_vec(register t_cd *const v,
										register const t_cd *const v1,
										register const t_cd *const v2)
{
	v->x = v1->x - v2->x;
	v->y = v1->y - v2->y;
	v->z = v1->z - v2->z;
}

inline static void		ft_op_get_n_vec(register t_cd *const v)
{
	const double		hypo = sqrt(v->x * v->x + v->y * v->y + v->z * v->z);

	v->x /= hypo;
	v->y /= hypo;
	v->z /= hypo;
}

void					ft_get_light_vector(register t_cd *const v,
											register const t_object *const light,
											register const t_cd *const hp)
{
	ft_op_sub_vec(v, &light->p, hp);
	ft_op_get_n_vec(v);
}
