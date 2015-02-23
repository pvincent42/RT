/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_button_image_2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/04 13:53:40 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/04 13:54:38 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <rt.h>

void			ft_set_button_image_2(t_data *d, t_button *b, t_square *q)
{
	b->status_img[1].data = mlx_new_image(d->init, q->w, q->h);
	ft_get_image_data(&b->status_img[1]);
	ft_fill_image(&b->status_img[1], b->c[1], b->w, b->h);
}
