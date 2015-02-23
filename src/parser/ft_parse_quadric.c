/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_quadric.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/01 01:23:15 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/12 18:01:30 by hjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <parser.h>
#include <math.h>

int					ft_parse_quadric(char *l, t_object *o, int *i)
{
	if (ft_strc(l, 'p'))
		o->p = ft_get_next_point(l, i);
	if (ft_strc(l, 'n'))
		o->n = ft_get_next_point(l, i);
	if (ft_strc(l, 'o'))
		o->o = ft_get_next_number(l, i);
	o->r = ft_strc(l, 'r') ? ft_get_next_number(l, i) : o->r;
	o->r2 = o->r ? o->r * o->r : 0;
	if (ft_strc(l, 'c'))
	{
		o->dc[0] = ft_get_next_number(l, i) / 255.0;
		o->dc[1] = ft_get_next_number(l, i) / 255.0;
		o->dc[2] = ft_get_next_number(l, i) / 255.0;
	}
	if (ft_strc(l, 'q'))
	{
		o->q1 = ft_get_next_point(l, i);
		o->q2 = ft_get_next_point(l, i);
		o->q3 = ft_get_next_point(l, i);
	}
	ft_parse_coefficients(l, o, i);
	ft_parse_noise(l, o, i);
	if (ft_strc(l, '}'))
		return (0);
	return (1);
}
