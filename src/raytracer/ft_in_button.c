/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_in_button.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/04 12:17:34 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/04 12:19:09 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

int				ft_in_button(t_button **buttons, int mx, int my, t_data *d)
{
	int			i;
	t_button	*b;

	i = -1;
	while (buttons[++i])
	{
		b = buttons[i];
		if (mx > b->x && my > b->y && mx < b->xw && my < b->yh)
			return (ft_switch_scene(b->scene_num, d));
	}
	return (0);
}
