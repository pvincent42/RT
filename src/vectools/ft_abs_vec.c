/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs_vec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:29:25 by rdavid            #+#    #+#             */
/*   Updated: 2014/02/22 16:35:01 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

t_cd			ft_abs_vec(register t_cd v)
{
	v.x = v.x < 0 ? -v.x : v.x;
	v.y = v.y < 0 ? -v.y : v.y;
	v.z = v.z < 0 ? -v.z : v.z;
	return (v);
}
