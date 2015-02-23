/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_image.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/04 12:12:23 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/04 12:13:56 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

void			ft_fill_image(t_image *img, int color, int w, int h)
{
	int			x;
	int			y;

	y = -1;
	while (++y < h)
	{
		x = -1;
		while (++x < w)
			ft_put_pixel(img, x, y, color);
	}
}
