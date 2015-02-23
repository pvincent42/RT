/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_buttons.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/04 12:23:05 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/05 16:49:29 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

int				ft_draw_buttons(t_button **buttons, t_data *d)
{
	int			i;
	t_button	*b;

	i = -1;
	while (buttons[++i])
	{
		b = buttons[i];
		ft_put_img(d, b->status_img[3].data, b->x - 2, b->y - 2);
		if (d->cs == b->scene_num)
			ft_put_img(d, b->status_img[2].data, b->x - 2, b->y - 2);
		ft_put_img(d, b->status_img[b->scene_status].data, b->x, b->y);
		if (d->scenes[i]->mini_img_done)
			ft_put_img(d, d->scenes[i]->mini_img.data, b->x + 2, b->y + 2);
	}
	return (1);
}
