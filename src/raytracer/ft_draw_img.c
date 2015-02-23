/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_img.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjeannin <hjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:25:54 by hjeannin          #+#    #+#             */
/*   Updated: 2014/03/11 17:21:01 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <rt.h>
#include <libft.h>

int				ft_draw_img(t_data *d)
{
	if (d->scenes[d->cs]->img[d->scenes[d->cs]->current_cam].data)
	{
		mlx_put_image_to_window(d->init, d->win,
					d->scenes[d->cs]->img[d->scenes[d->cs]->current_cam].data,
					d->sx, d->sy);
	}
	return (0);
}
