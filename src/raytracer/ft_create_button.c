/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_button.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/04 13:23:49 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/05 14:18:42 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <rt.h>

t_button			*ft_create_button(t_data *d, t_square *q, int x_space)
{
	t_button		*b;

	if (!(b = (t_button *)malloc(sizeof(t_button))))
		return (NULL);
	ft_set_button_position(b, q, x_space);
	ft_set_button_colors(b);
	ft_set_button_image_1(d, b, q);
	ft_set_button_image_2(d, b, q);
	ft_set_button_image_3(d, b, q);
	ft_set_button_image_4(d, b, q);
	b->type = SCENE_BUTTON;
	b->scene_status = 0;
	return (b);
}
