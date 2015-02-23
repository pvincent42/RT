/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_cylinder.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:27:45 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/26 12:18:39 by pvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <parser.h>

void				ft_precalc_n(t_object *o)
{
	o->ndot.x = o->n.x * o->n.y;
	o->ndot.y = o->n.x * o->n.z;
	o->ndot.z = o->n.y * o->n.z;
}

int					ft_parse_cylinder(char *l, t_object *o, int *i)
{
	if (ft_strc(l, 'p'))
		o->p = ft_get_next_point(l, i);
	if (ft_strc(l, 'n'))
		o->n = ft_get_next_point(l, i);
	ft_get_n_vector(o->n, &o->n, 0);
	ft_precalc_n(o);
	o->p.x = o->p.x + -o->n.x * 1000000;
	o->p.y = o->p.y + -o->n.y * 1000000;
	o->p.z = o->p.z + -o->n.z * 1000000;
	o->r = ft_strc(l, 'r') ? ft_get_next_number(l, i) : o->r;
	o->r2 = o->r ? pow(o->r, 2) : 0;
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
