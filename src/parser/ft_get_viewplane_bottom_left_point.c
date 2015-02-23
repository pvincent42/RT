/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_viewplane_bottom_left_point.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:26:55 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/22 17:42:13 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <parser.h>

void			ft_get_viewplane_bottom_left_point(t_object *cam, t_scene *s)
{
	cam->vp.blp.x = cam->p.x + cam->n.x * s->dcs
		- cam->vp.v.x * cam->vp.hh + cam->vp.u.x * cam->vp.hw;
	cam->vp.blp.y = cam->p.y + cam->n.y * s->dcs
		- cam->vp.v.y * cam->vp.hh + cam->vp.u.y * cam->vp.hw;
	cam->vp.blp.z = cam->p.z + cam->n.z * s->dcs
		- cam->vp.v.z * cam->vp.hh + cam->vp.u.z * cam->vp.hw;
}
