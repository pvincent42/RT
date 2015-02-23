/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_noise.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/02 06:12:07 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/18 21:04:27 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <parser.h>
#include <libft.h>

void			ft_parse_noise(char *l, t_object *o, int *i)
{
	if (ft_strinstr(l, "noise"))
	{
		o->ns.type = PERLIN;
		o->ns.type = ft_get_next_number(l, i);
		o->ns.color = ft_strinstr(l, "color") ? 1 : 0;
		o->ns.normal = ft_strinstr(l, "normal") ? 1 : 0;
		o->ns.layers = (int)ft_get_next_number(l, i);
		o->ns.frequency = 0.01 * ft_get_next_number(l, i);
		o->ns.amplitude = 0.01 * ft_get_next_number(l, i);
		o->ns.lacunarity = 0.01 * ft_get_next_number(l, i);
		o->ns.gain = 0.01 * ft_get_next_number(l, i);
		o->ns.prm = NULL;
	}
	else
		o->ns.type = NO_PERLIN;
}
