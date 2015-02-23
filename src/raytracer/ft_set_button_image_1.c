/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_button_image_1.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/04 13:51:51 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/04 13:52:29 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <rt.h>

void			ft_set_button_image_1(t_data *d, t_button *b, t_square *q)
{
	b->status_img[0].data = mlx_new_image(d->init, q->w, q->h);
	ft_get_image_data(&b->status_img[0]);
	ft_fill_image(&b->status_img[0], b->c[0], b->w, b->h);
}
