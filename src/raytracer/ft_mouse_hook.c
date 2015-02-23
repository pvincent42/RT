/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mouse_hook.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/04 00:36:46 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/04 12:26:07 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

int				ft_mouse_hook(int button, int x, int y, t_data *d)
{
	if (button == 1)
	{
		if (ft_in_button(d->buttons, x, y, d))
			ft_draw_buttons(d->buttons, d);
		ft_draw_img(d);
	}
	return (0);
}
