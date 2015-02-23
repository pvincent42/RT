/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_noise_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/03 04:05:30 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/25 05:04:40 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <rt.h>

double			ft_noise_2(register const t_noise *const n,
							register const double *const x,
							register const double *const y,
							register const double *const z)
{
	return (1 / sqrt(1 / sqrt(ft_abs(fractal_noise(*n, *x, *y, *z)) * 10)));
}
