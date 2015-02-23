/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_cone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:27:29 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/02 06:24:40 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <parser.h>

int					ft_parse_cone(char *l, t_object *o, int *i)
{
	if (ft_strc(l, 'p'))
		o->p = ft_get_next_point(l, i);
	if (ft_strc(l, 'n'))
		o->n = ft_get_next_point(l, i);
	if (ft_strc(l, 'c'))
	{
		o->dc[0] = ft_get_next_number(l, i) / 255.0;
		o->dc[1] = ft_get_next_number(l, i) / 255.0;
		o->dc[2] = ft_get_next_number(l, i) / 255.0;
	}
	ft_parse_coefficients(l, o, i);
	ft_parse_noise(l, o, i);
	if (ft_strc(l, '}'))
		return (0);
	return (1);
}
