/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_color.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:25:25 by rdavid            #+#    #+#             */
/*   Updated: 2014/02/22 16:25:25 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <parser.h>

int					ft_get_next_color(char *str, int *i)
{
	int				color;
	int				rgb[3];

	rgb[0] = ft_get_next_number(str, i);
	rgb[1] = ft_get_next_number(str, i);
	rgb[2] = ft_get_next_number(str, i);
	color = ((rgb[0] & 0x0FF) << 16) | ((rgb[1] & 0x0FF) << 8)
				| (rgb[2] & 0x0FF);
	return (color);
}
