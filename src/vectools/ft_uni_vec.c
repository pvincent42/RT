/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uni_vec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:30:18 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/26 09:33:35 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

t_cd			ft_uni_vec(register const t_cd v)
{
	register t_cd		vr;

	vr.x = 0.0;
	vr.y = 0.0;
	vr.z = 0.0;
	if (v.x != 0.0)
		vr.x = v.x < 0.0 ? -v.x / v.x : v.x / v.x;
	if (v.y != 0.0)
		vr.y = v.y < 0.0 ? -v.y / v.x : v.x / v.x;
	if (v.z != 0.0)
		vr.z = v.z < 0.0 ? -v.z / v.x : v.x / v.x;
	return (vr);
}
