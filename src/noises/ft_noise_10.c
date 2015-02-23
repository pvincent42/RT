/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_noise_10.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/23 00:30:26 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/26 12:09:51 by pvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <rt.h>

double			ft_noise_10(register const t_noise *const n,
							register const double *const x,
							register const double *const y,
							register const double *const z)
{
	return (1.5 * (fractal_noise(*n, *x, *y, *z)
	+ 2 * fractal_noise(*n, *x, *x, *x)
	+ 2 * fractal_noise(*n, *y, *y, *y)
	+ 2 * fractal_noise(*n, *z, *z, *z))
	+ 0.90);
}
