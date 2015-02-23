/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_negative_effect.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/24 22:00:55 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/24 22:09:28 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

void			ft_negative_effect(double effect[3], double color[3])
{
	effect[0] = 1.0 - color[0];
	effect[1] = 1.0 - color[1];
	effect[2] = 1.0 - color[2];
	ft_check_light(&effect[0]);
	ft_check_light(&effect[1]);
	ft_check_light(&effect[2]);
	effect[0] *= 255.0;
	effect[1] *= 255.0;
	effect[2] *= 255.0;
}
