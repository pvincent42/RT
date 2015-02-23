/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_noise_13.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvincent <pvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/23 06:32:07 by pvincent          #+#    #+#             */
/*   Updated: 2014/03/25 05:07:41 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <rt.h>

double			ft_noise_13(register const t_noise *const n,
							register const double *const x,
							register const double *const y,
							register const double *const z)
{
	return (fractal_noise(*n, *x, *y, *z));
}
