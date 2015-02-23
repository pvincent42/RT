/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_plane.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 17:04:16 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/26 13:03:39 by pvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <rt.h>

t_object		*ft_new_plane(t_cd p, t_cd n)
{
	t_object	*pl;

	if (!(pl = (t_object *)malloc(sizeof(t_object))))
		return (NULL);
	pl->n.x = n.x;
	pl->n.y = n.y;
	pl->n.z = n.z;
	pl->p.x = p.x;
	pl->p.y = p.y;
	pl->p.z = p.z;
	pl->dc[0] = 0.0;
	pl->dc[1] = 0.0;
	pl->dc[2] = 0.0;
	pl->sc[0] = 1.0;
	pl->sc[1] = 1.0;
	pl->sc[2] = 1.0;
	return (pl);
}
