/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_view_vector.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/15 14:49:00 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/25 04:22:15 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <rt.h>

inline static void		ft_op_get_n_vec(register t_cd *const v)
{
	register const double	hypo = sqrt(v->x * v->x
										+ v->y * v->y
										+ v->z * v->z);

	v->x = v->x / hypo;
	v->y = v->y / hypo;
	v->z = v->z / hypo;
}

void					ft_get_view_vector(register t_cd *const v,
											register const t_cd *const cam,
											register const t_cd *const hp)
{
	v->x = cam->x - hp->x;
	v->y = cam->y - hp->y;
	v->z = cam->z - hp->z;
	ft_op_get_n_vec(v);
}
