/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_cylinder.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 17:02:53 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/26 13:01:24 by pvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <rt.h>

t_object		*ft_new_cylinder(t_cd p, t_cd n, double r)
{
	t_object	*cy;

	if (!(cy = (t_object *)malloc(sizeof(t_object))))
		return (NULL);
	cy->n.x = n.x;
	cy->n.y = n.y;
	cy->n.z = n.z;
	cy->p.x = p.x;
	cy->p.y = p.y;
	cy->p.z = p.z;
	cy->r = r;
	cy->r2 = cy->r * cy->r;
	cy->dc[0] = 0.0;
	cy->dc[1] = 0.0;
	cy->dc[2] = 0.0;
	cy->sc[0] = 1.0;
	cy->sc[1] = 1.0;
	cy->sc[2] = 1.0;
	return (cy);
}
