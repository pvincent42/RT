/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_noise_5.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/03 05:16:57 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/26 12:11:13 by pvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <rt.h>

double			ft_noise_5(register const t_noise *const n,
							register const double *const x,
							register const double *const y,
							register const double *const z)
{
	return (cos(fractal_noise(*n, *x, *y, *z) / 3)
	+ sin(fractal_noise(*n, *y, *x, *z) * 30));
}
