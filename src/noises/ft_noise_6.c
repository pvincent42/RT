/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_noise_6.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/03 07:43:08 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/26 12:11:23 by pvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <rt.h>
#include <noise.h>

double			ft_noise_6(register const t_noise *const n,
							register const double *const x,
							register const double *const y,
							register const double *const z)
{
	return ((ft_noise_3(n, x, y, z)
	+ ft_noise_2(n, x, y, z))
	* cos(ft_noise_5(n, x, y, z)));
}
