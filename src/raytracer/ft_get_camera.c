/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_camera.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/25 12:26:32 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/25 12:26:48 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

t_object						*ft_get_camera(t_scene *s, int *i)
{
	t_elem						*camrunner;

	camrunner = s->cams->begin;
	*i = 0;
	while (camrunner)
	{
		if (*i == s->current_cam)
			break ;
		camrunner = camrunner->next;
		++(*i);
	}
	return (camrunner->o);
}
