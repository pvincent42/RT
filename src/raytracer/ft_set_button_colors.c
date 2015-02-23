/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_button_colors.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/04 13:48:55 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/04 13:49:37 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

void				ft_set_button_colors(t_button *b)
{
	b->c[0] = 0xff0000;
	b->c[1] = 0x00ff00;
	b->c[2] = 0xffff00;
	b->c[3] = 0x000000;
}
