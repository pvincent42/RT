/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_noise_7.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/05 12:50:29 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/26 12:11:33 by pvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <rt.h>

double			ft_noise_7(register const t_noise *const n,
							register const double *const x,
							register const double *const y,
							register const double *const z)
{
	return (cos(fractal_noise(*n, *x, *y, *z) / 3)
		+ sin(fractal_noise(*n, *y, *x, *z)));
}
