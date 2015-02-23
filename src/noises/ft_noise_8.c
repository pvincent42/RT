/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_noise_8.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/19 20:47:26 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/26 12:11:41 by pvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <rt.h>

double			ft_noise_8(register const t_noise *const n,
							register const double *const x,
							register const double *const y,
							register const double *const z)
{
	return (fractal_noise(*n, *x, *y, *z)
	+ 1 / sqrt(1 / sqrt(ft_abs(fractal_noise(*n, *x, *y, *z)))));
}
