/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_coefficients.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/25 21:49:17 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/22 17:35:52 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <parser.h>

void			ft_parse_coefficients(char *l, t_object *o, int *i)
{
	o->ka = ft_strc(l, 'a') ? 0.01 * ft_get_next_number(l, i) : 1.0;
	o->kd = ft_strc(l, 'd') ? 0.01 * ft_get_next_number(l, i) : 1.0;
	o->ks = ft_strc(l, 's') ? 0.01 * ft_get_next_number(l, i) : 1.0;
	o->shine = ft_strc(l, 'b') ? ft_get_next_number(l, i) : 1.0;
	o->shine = o->shine < 1.0 ? 1.0 : o->shine;
	if (ft_strinstr(l, "krl"))
	{
		o->krl = 0.01 * ft_get_next_number(l, i);
		o->dc[0] = o->dc[0] * (1.0 - o->krl);
		o->dc[1] = o->dc[1] * (1.0 - o->krl);
		o->dc[2] = o->dc[2] * (1.0 - o->krl);
	}
	else
		o->krl = 0.0;
	o->krr = ft_strinstr(l, "krr") ? 0.01 * ft_get_next_number(l, i) : 0.0;
	o->kt = ft_strinstr(l, "kt") ? 0.01 * ft_get_next_number(l, i) : 0.0;
}
