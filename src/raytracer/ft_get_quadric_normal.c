/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_quadric_normal.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/15 15:47:18 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/15 15:47:46 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

void				ft_get_quadric_normal(register t_cd *const v_n,
										register const t_tdata *const td,
										register const t_object *const o,
										register const t_cd *const hp)
{
	(void)td;
	v_n->x = 2 * o->q1.x * hp->x
		+ o->q2.x * hp->y
		+ o->q2.y * hp->z
		+ o->q3.x;
	v_n->y = 2 * o->q1.y * hp->y
		+ o->q2.x * hp->x
		+ o->q2.z * hp->z
		+ o->q3.y;
	v_n->z = 2 * o->q1.z * hp->z
		+ o->q2.y * hp->x
		+ o->q2.z * hp->y
		+ o->q3.z;
}
