/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_viewplane_top_right_point.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:27:11 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/07 09:09:06 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <parser.h>

void				ft_get_viewplane_top_right_point(t_object *cam, t_scene *s)
{
	cam->vp.trp.x = cam->p.x + cam->n.x * s->dcs
		+ cam->vp.v.x * cam->vp.hh - cam->vp.u.x * cam->vp.hw;
	cam->vp.trp.y = cam->p.y + cam->n.y * s->dcs
		+ cam->vp.v.y * cam->vp.hh - cam->vp.u.y * cam->vp.hw;
	cam->vp.trp.z = cam->p.z + cam->n.z * s->dcs
		+ cam->vp.v.z * cam->vp.hh - cam->vp.u.z * cam->vp.hw;
}
