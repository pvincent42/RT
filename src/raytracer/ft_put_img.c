/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_img.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/04 12:19:50 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/04 12:26:51 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <rt.h>

void			ft_put_img(t_data *d, void *img, int x, int y)
{
	mlx_put_image_to_window(d->init, d->win, img, x, y);
}
