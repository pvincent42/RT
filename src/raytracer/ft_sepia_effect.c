/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sepia_effect.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/24 21:51:06 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/24 21:55:31 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

void			ft_sepia_effect(double effect[3], double color[3])
{
	effect[0] = color[0] * 0.393 + color[1] * 0.769 + color[2] * 0.189;
	effect[1] = color[0] * 0.349 + color[1] * 0.686 + color[2] * 0.168;
	effect[1] = color[0] * 0.272 + color[1] * 0.534 + color[2] * 0.131;
	ft_check_light(&effect[0]);
	ft_check_light(&effect[1]);
	ft_check_light(&effect[2]);
	effect[0] *= 255.0;
	effect[1] *= 255.0;
	effect[2] *= 255.0;
}
