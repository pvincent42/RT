/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_buttons.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/04 03:05:26 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/24 00:38:50 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <mlx.h>
#include <rt.h>

t_button		**ft_create_buttons(t_data *d)
{
	int			i;
	t_button	*b;
	t_square	q;
	int			x_space;

	if (!(d->buttons = (t_button **)malloc(sizeof(t_button *) * (d->sl + 1))))
		return (NULL);
	i = -1;
	q.w = WX / (10 + d->sl);
	q.h = WY / (10 + d->sl);
	x_space = 10;
	q.x = x_space;
	q.y = 10;
	while (++i < d->sl)
	{
		d->buttons[i] = ft_create_button(d, &q, x_space);
		b = d->buttons[i];
		b->scene_num = i;
		q.x += x_space + q.w;
	}
	d->buttons[d->sl] = NULL;
	return (d->buttons);
}
