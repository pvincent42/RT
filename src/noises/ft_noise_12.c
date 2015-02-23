/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_noise_12.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvincent <pvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/23 01:26:07 by pvincent          #+#    #+#             */
/*   Updated: 2014/03/26 12:10:49 by pvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <rt.h>

double			ft_noise_12(register const t_noise *const n,
							register const double *const x,
							register const double *const y,
							register const double *const z)
{
	return (1 / sqrt((fractal_noise(*n, *x / 2, *y * 2, *z * 1.5) + 0.7
	/ 1 / sqrt(fractal_noise(*n, *y, *x, *z)
	* fractal_noise(*n, *x, *y, *z)))));
}
