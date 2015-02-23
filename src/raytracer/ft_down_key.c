/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_down_key.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/14 08:36:05 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/25 07:10:40 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

void			ft_down_key(t_data *d)
{
	ft_modulo_key(&d->scenes[d->cs]->current_cam,
				d->scenes[d->cs]->cams->size, 0);
	ft_draw_img(d);
	ft_draw_buttons(d->buttons, d);
}
