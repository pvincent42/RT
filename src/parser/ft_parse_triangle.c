/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_triangle.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/05 11:07:36 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/24 06:25:57 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <parser.h>

int				ft_parse_triangle(char *l, t_object *o, int *i)
{
	if (ft_strc(l, 't'))
	{
		o->q1 = ft_get_next_point(l, i);
		o->q2 = ft_get_next_point(l, i);
		o->q3 = ft_get_next_point(l, i);
		o->p = o->q1;
	}
	if (ft_strc(l, 'c'))
	{
		o->dc[0] = ft_get_next_number(l, i) / 255.0;
		o->dc[1] = ft_get_next_number(l, i) / 255.0;
		o->dc[2] = ft_get_next_number(l, i) / 255.0;
	}
	o->n = ft_cross_vec(ft_get_vector(&o->q1, &o->q2),
						ft_get_vector(&o->q1, &o->q3));
	ft_get_n_vector(o->n, &o->n, 0);
	ft_parse_coefficients(l, o, i);
	ft_parse_noise(l, o, i);
	if (ft_strc(l, '}'))
		return (0);
	return (1);
}
