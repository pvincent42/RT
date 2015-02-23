/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_button_image_4.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/04 13:55:35 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/04 13:56:29 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <rt.h>

void			ft_set_button_image_4(t_data *d, t_button *b, t_square *q)
{
	b->status_img[3].data = mlx_new_image(d->init, q->w + 4, q->h + 4);
	ft_get_image_data(&b->status_img[3]);
	ft_fill_image(&b->status_img[3], b->c[3], b->w + 4, b->h + 4);
}
