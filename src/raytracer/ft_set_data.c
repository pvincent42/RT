/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_data.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/26 20:43:08 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/27 19:53:43 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>
#include <math.h>

int			ft_set_data(t_data *d)
{
	if (d->interactive)
	{
		d->wx = WX * 0.15;
		d->wy = WY * 0.15;
	}
	else
	{
		d->wx = WX * 0.8;
		d->wy = WY * 0.8;
	}
	d->to_rad = M_PI / 180;
	d->current_frame = 0;
	d->sx = (WX / 2) - (d->wx / 2);
	d->sy = (WY / 2) - (d->wy / 2);
	d->scenes = NULL;
	d->cs = 0;
	d->sl = 0;
	d->recording = 0;
	return (0);
}
