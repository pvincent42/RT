/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_spot.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 17:06:52 by rdavid            #+#    #+#             */
/*   Updated: 2014/02/22 17:07:01 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <rt.h>

t_object		*ft_new_spot(t_cd p)
{
	t_object	*s;

	if (!(s = (t_object *)malloc(sizeof(t_object))))
		return (NULL);
	s->p.x = p.x;
	s->p.y = p.y;
	s->p.z = p.z;
	return (s);
}
