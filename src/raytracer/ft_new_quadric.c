/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_quadric.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/01 02:15:41 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/26 13:03:59 by pvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <rt.h>

t_object		*ft_new_quadric(t_cd p, t_cd n, double r)
{
	t_object	*q;

	if (!(q = (t_object *)malloc(sizeof(t_object))))
		return (NULL);
	q->p.x = p.x;
	q->p.y = p.y;
	q->p.z = p.z;
	q->n.x = n.x;
	q->n.y = n.y;
	q->n.z = n.z;
	q->r = r;
	q->dc[0] = 0.0;
	q->dc[1] = 0.0;
	q->dc[2] = 0.0;
	q->sc[0] = 1.0;
	q->sc[1] = 1.0;
	q->sc[2] = 1.0;
	return (q);
}
