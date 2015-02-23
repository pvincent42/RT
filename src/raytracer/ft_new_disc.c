/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_disc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 17:05:56 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/26 13:01:44 by pvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <rt.h>

t_object		*ft_new_disc(t_cd p, t_cd n, double r)
{
	t_object	*ds;

	if (!(ds = (t_object *)malloc(sizeof(t_object))))
		return (NULL);
	ds->n.x = n.x;
	ds->n.y = n.y;
	ds->n.z = n.z;
	ds->p.x = p.x;
	ds->p.y = p.y;
	ds->p.z = p.z;
	ds->r = r;
	ds->r2 = ds->r * ds->r;
	ds->dc[0] = 0.0;
	ds->dc[1] = 0.0;
	ds->dc[2] = 0.0;
	ds->sc[0] = 1.0;
	ds->sc[1] = 1.0;
	ds->sc[2] = 1.0;
	return (ds);
}
