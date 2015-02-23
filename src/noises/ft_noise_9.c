/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_noise_9.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/22 22:55:41 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/26 12:11:52 by pvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <rt.h>

double			ft_noise_9(register const t_noise *const n,
							register const double *const x,
							register const double *const y,
							register const double *const z)
{
	return (fractal_noise(*n, *x, *y, *z)
	+ ft_abs(fractal_noise(*n, *x, *y, *z))
	+ ft_abs(fractal_noise(*n, *x * 2, *y * 2, *z * 2))
	+ ft_abs(fractal_noise(*n, *x * 4, *y * 4, *z * 4))
	+ ft_abs(fractal_noise(*n, *x * 6, *y * 6, *z * 6)));
}
