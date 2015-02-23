/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_spot.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:28:24 by rdavid            #+#    #+#             */
/*   Updated: 2014/02/22 16:28:24 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <parser.h>

int					ft_parse_spot(char *l, t_object *o, int *i)
{
	o->p.x = ft_strc(l, 'x') ? ft_get_next_number(l, i) : o->p.x;
	o->p.y = ft_strc(l, 'y') ? ft_get_next_number(l, i) : o->p.y;
	o->p.z = ft_strc(l, 'z') ? ft_get_next_number(l, i) : o->p.z;
	if (ft_strc(l, 'c'))
	{
		o->lc[0] = ft_get_next_number(l, i) / 255.0;
		o->lc[1] = ft_get_next_number(l, i) / 255.0;
		o->lc[2] = ft_get_next_number(l, i) / 255.0;
	}
	if (ft_strc(l, '}'))
		return (0);
	return (1);
}
