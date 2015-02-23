/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pixel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjeannin <hjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:26:58 by hjeannin          #+#    #+#             */
/*   Updated: 2014/03/21 15:34:24 by pvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>
#include <mlx.h>

void			ft_put_pixel(t_image *img, int x, int y, int cl)
{
	int			res;

	res = (x * (img->bpp / sizeof(char *)) + (y * img->sizeline));
	img->p_data[res] = cl;
	img->p_data[res + 1] = cl >> 8;
	img->p_data[res + 2] = cl >> 16;
}
