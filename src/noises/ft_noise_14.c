/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_noise_14.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvincent <pvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/25 04:42:15 by pvincent          #+#    #+#             */
/*   Updated: 2014/03/27 19:39:00 by pvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <rt.h>

double			ft_noise_14(register const t_noise *const n,
							register const double *const x,
							register const double *const y,
							register const double *const z)
{
	double		p1;
	double		p2;
	double		p3;

	(void)n;/*
	if (n->layers == 0.0)
		n->layers += 1.0;*/
	p1 = (*x / n->layers);
	p2 = (*y / n->layers);
	p3 = (*z / n->layers);
	p1 = ft_abs(fmod(p1, 2.0));
	p2 = ft_abs(fmod(p2, 2.0));
	p3 = ft_abs(fmod(p3, 2.0));
	if (p3 >= 0.0 && p3 < 1.0)
	{
		if (p1 < 1.0 && p1 >= 0.0 && p2 < 1.0 && p2 >= 0.0)
			return (0x91283B);
		else
			return (0x00000000);
	}
	if (p1 < 1.0 && p1 >= 0.0 && p2 < 1.0 && p2 >= 0.0)
		return (0x91283B);
	else
		return (0x00000000);
	return (0x00000000);
}
