/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_tetrahedron.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjeannin <hjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/24 19:51:50 by hjeannin          #+#    #+#             */
/*   Updated: 2014/03/24 19:51:51 by hjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <parser.h>

inline static void		ft_tetrahedron_vectors(t_object *o)
{
	o->tn1 = ft_cross_vec(ft_get_vector(&o->ta, &o->tb),
						ft_get_vector(&o->ta, &o->tc));
	o->tn2 = ft_cross_vec(ft_get_vector(&o->ta, &o->tb),
						ft_get_vector(&o->ta, &o->td));
	o->tn3 = ft_cross_vec(ft_get_vector(&o->ta, &o->tc),
						ft_get_vector(&o->ta, &o->td));
	o->tn4 = ft_cross_vec(ft_get_vector(&o->tb, &o->tc),
						ft_get_vector(&o->tb, &o->td));
	ft_get_n_vector(o->tn1, &o->tn1, 0);
	ft_get_n_vector(o->tn2, &o->tn2, 0);
	ft_get_n_vector(o->tn3, &o->tn3, 0);
	ft_get_n_vector(o->tn4, &o->tn4, 0);
}

int						ft_parse_tetrahedron(char *l, t_object *o, int *i)
{
	if (ft_strc(l, 't'))
	{
		o->ta = ft_get_next_point(l, i);
		o->tb = ft_get_next_point(l, i);
		o->tc = ft_get_next_point(l, i);
		o->td = ft_get_next_point(l, i);
	}
	if (ft_strc(l, 'c'))
	{
		o->dc[0] = ft_get_next_number(l, i) / 255.0;
		o->dc[1] = ft_get_next_number(l, i) / 255.0;
		o->dc[2] = ft_get_next_number(l, i) / 255.0;
	}
	ft_parse_coefficients(l, o, i);
	ft_parse_noise(l, o, i);
	ft_tetrahedron_vectors(o);
	if (ft_strc(l, '}'))
		return (0);
	return (1);
}
