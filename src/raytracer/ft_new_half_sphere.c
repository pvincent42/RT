/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_half_sphere.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 17:03:48 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/26 13:02:48 by pvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <rt.h>

t_object		*ft_new_half_sphere(t_cd p, t_cd n, double r)
{
	t_object	*hs;

	if (!(hs = (t_object *)malloc(sizeof(t_object))))
		return (NULL);
	hs->n.x = n.x;
	hs->n.y = n.y;
	hs->n.z = n.z;
	hs->p.x = p.x;
	hs->p.y = p.y;
	hs->p.z = p.z;
	hs->r = r;
	hs->r2 = hs->r * hs->r;
	hs->dc[0] = 0.0;
	hs->dc[1] = 0.0;
	hs->dc[2] = 0.0;
	hs->sc[0] = 1.0;
	hs->sc[1] = 1.0;
	hs->sc[2] = 1.0;
	return (hs);
}
