/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_noise_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/03 04:14:18 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/25 05:04:28 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <rt.h>

double			ft_noise_3(register const t_noise *const n,
							register const double *const x,
							register const double *const y,
							register const double *const z)
{
	return (cos(*x / 20) + sqrt(ft_abs(fractal_noise(*n, *x, *y, *z) * 10)));
}
