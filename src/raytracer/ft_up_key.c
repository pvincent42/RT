/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_up_key.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/14 08:34:50 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/25 08:03:56 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

void				ft_up_key(t_data *d)
{
	ft_modulo_key(&d->scenes[d->cs]->current_cam,
				d->scenes[d->cs]->cams->size, 1);
	ft_draw_img(d);
	ft_draw_buttons(d->buttons, d);
}
