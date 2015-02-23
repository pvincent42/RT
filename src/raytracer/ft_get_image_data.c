/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_image_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/04 12:13:45 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/04 12:15:01 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <rt.h>

void			ft_get_image_data(t_image *img)
{
	img->p_data = mlx_get_data_addr(img->data,
									&img->bpp,
									&img->sizeline,
									&img->endian);
}
