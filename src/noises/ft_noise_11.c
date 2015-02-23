/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_noise_11.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/23 00:51:00 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/26 12:10:23 by pvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <stdlib.h>
#include <rt.h>
#include <noise.h>

double			ft_noise_11(register const t_noise *const n,
							register const double *const x,
							register const double *const y,
							register const double *const z)
{
	return ((ft_abs(fractal_noise(*n, *z, *y, *x))
	+ ft_noise_2(n, x, y, z)
	+ ft_noise_5(n, x, y, z)
	+ ft_noise_6(n, x, y, z)
	+ ft_noise_7(n, x, y, z)
	+ ft_noise_8(n, x, y, z)
	+ ft_noise_9(n, x, y, z)) / 10);
}
