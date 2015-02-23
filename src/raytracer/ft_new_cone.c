/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_cone.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 17:05:16 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/26 13:00:43 by pvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <rt.h>

t_object		*ft_new_cone(t_cd p, t_cd n)
{
	t_object	*co;

	if (!(co = (t_object *)malloc(sizeof(t_object))))
		return (NULL);
	co->n.x = n.x;
	co->n.y = n.y;
	co->n.z = n.z;
	co->p.x = p.x;
	co->p.y = p.y;
	co->p.z = p.z;
	co->dc[0] = 0.0;
	co->dc[1] = 0.0;
	co->dc[2] = 0.0;
	co->sc[0] = 1.0;
	co->sc[1] = 1.0;
	co->sc[2] = 1.0;
	return (co);
}
