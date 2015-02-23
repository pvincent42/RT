/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_button_image_3.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/04 13:54:48 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/04 13:55:27 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <rt.h>

void			ft_set_button_image_3(t_data *d, t_button *b, t_square *q)
{
	b->status_img[2].data = mlx_new_image(d->init, q->w + 4, q->h + 4);
	ft_get_image_data(&b->status_img[2]);
	ft_fill_image(&b->status_img[2], b->c[2], b->w + 4, b->h + 4);
}
