/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_noise_4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/03 04:15:59 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/26 12:11:04 by pvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>
#include <noise.h>

double			ft_noise_4(register const t_noise *const n,
							register const double *const x,
							register const double *const y,
							register const double *const z)
{
	return (ft_abs(fractal_noise(*n, *x, *y, *z))
	+ ft_noise_7(n, x, y, z) * 0.5
	+ ft_noise_6(n, x, y, z) * 0.25
	+ ft_noise_3(n, x, y, z) * 0.12
	+ ft_noise_2(n, x, y, z) * 0.06
	+ ft_noise_1(n, x, y, z) * 0.03
	+ fractal_noise(*n, *x, *y, *z) * 0.10);
}
