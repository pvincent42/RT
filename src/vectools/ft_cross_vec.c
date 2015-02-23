/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cross_vec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:29:32 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/04 00:34:47 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

t_cd					ft_cross_vec(register const t_cd v1,
									register const t_cd v2)
{
	register t_cd		v;

	v.x = v1.y * v2.z - v1.z * v2.y;
	v.y = v1.z * v2.x - v1.x * v2.z;
	v.z = v1.x * v2.y - v1.y * v2.x;
	if (v.x == -0.0)
		v.x = 0.0;
	if (v.y == -0.0)
		v.y = 0.0;
	if (v.z == -0.0)
		v.z = 0.0;
	return (v);
}
