/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fractal_noise.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/25 04:59:30 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/25 05:16:23 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

double				fractal_noise(register t_noise n,
								register const double x,
								register const double y,
								register const double z)
{
	double			fnoise;
	double			max_sum;
	int				i;

	fnoise = 0;
	max_sum = 0;
	i = -1;
	while (++i < n.layers)
	{
		max_sum += n.amplitude;
		fnoise += ft_noise(n.prm,
							x * n.frequency,
							y * n.frequency,
							z * n.frequency) * n.amplitude;
		n.frequency *= n.lacunarity;
		n.amplitude *= n.gain;
	}
	return (fnoise / max_sum);
}
