/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_sphere.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 17:00:44 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/26 13:00:05 by pvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <rt.h>

t_object		*ft_new_sphere(t_cd p, t_cd n, double r)
{
	t_object	*s;

	if (!(s = (t_object *)malloc(sizeof(t_object))))
		return (NULL);
	s->n.x = n.x;
	s->n.y = n.y;
	s->n.z = n.z;
	s->p.x = p.x;
	s->p.y = p.y;
	s->p.z = p.z;
	s->r = r;
	s->r2 = s->r * s->r;
	s->dc[0] = 0.0;
	s->dc[1] = 0.0;
	s->dc[2] = 0.0;
	s->sc[0] = 1.0;
	s->sc[1] = 1.0;
	s->sc[2] = 1.0;
	return (s);
}
