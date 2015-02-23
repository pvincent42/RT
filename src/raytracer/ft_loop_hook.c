/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_loop_hook.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/04 08:29:58 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/25 14:00:43 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>
#include <libft.h>

int				ft_loop_hook(t_data *d)
{
	if (d->current_frame != -1)
	{
		d->current_frame += 1;
		d->current_frame %= 100000;
	}
	if (((d->current_frame % 10000) == 0)
		&& !d->buttons[d->sl - 1]->scene_status)
		ft_draw_img(d);
	if (d->current_frame != -1 && d->buttons[d->sl - 1]->scene_status)
	{
		d->current_frame = -1;
		ft_draw_img(d);
	}
	if (d->scene_done == 1)
	{
		ft_draw_buttons(d->buttons, d);
		d->scene_done = 0;
	}
	return (0);
}
