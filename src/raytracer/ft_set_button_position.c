/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_button_position.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/04 13:50:08 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/04 13:51:02 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

void			ft_set_button_position(t_button *b, t_square *q, int x_space)
{
	b->w = q->w;
	b->xw = q->x + q->w;
	b->h = q->h;
	b->yh = q->y + q->h;
	if (b->xw > WX)
	{
		q->x = x_space;
		q->y += x_space + q->h;
		b->xw = q->x + q->w;
		b->yh = q->y + q->h;
	}
	b->x = q->x;
	b->y = q->y;
}
