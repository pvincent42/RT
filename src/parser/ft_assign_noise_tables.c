/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_assign_noise_tables.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/18 21:12:45 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/18 21:15:56 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <parser.h>

void			ft_assign_noise_tables(t_scene *s)
{
	t_elem		*ow;

	ow = s->objs->begin;
	while (ow)
	{
		ow->o->ns.prm = s->prm;
		ow = ow->next;
	}
}
