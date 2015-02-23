/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_noise_1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/03 04:04:06 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/26 12:09:33 by pvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <rt.h>

double			ft_noise_1(register const t_noise *const n,
							register const double *const x,
							register const double *const y,
							register const double *const z)
{
	return (2 * (sin(cos(*x / 20) + 1 / ft_abs((fractal_noise(*n, *x, *y, *z))
	+ fractal_noise(*n, *x, *y, *z)
	+ fractal_noise(*n, *x, *y, *z)))));
}
