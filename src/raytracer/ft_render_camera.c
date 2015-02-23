/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_render_camera.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/25 12:27:44 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/25 12:28:04 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <parser.h>

void							ft_render_camera(t_object *cam, t_scene *s)
{
	ft_get_cam_viewplane(cam, s, s->sx, s->sy);
	s->xi = ft_sub_vec(cam->vp.trp, cam->vp.tlp);
	s->yi = ft_sub_vec(cam->vp.blp, cam->vp.tlp);
	ft_get_n_vector(s->xi, &s->xi, 0);
	ft_get_n_vector(s->yi, &s->yi, 0);
	ft_ray_caster(s);
}
