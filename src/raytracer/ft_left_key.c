/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_left_key.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/14 08:34:07 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/14 08:42:18 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

void				ft_left_key(t_data *d)
{
	ft_modulo_key(&d->cs, d->sl, 0);
	ft_draw_img(d);
	ft_draw_buttons(d->buttons, d);
}