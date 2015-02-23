/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_cam_viewplane.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:24:50 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/22 17:41:17 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <parser.h>

void				ft_get_cam_viewplane(t_object *cam, t_scene *s,
										int wx, int wy)
{
	cam->vp.hw = wx / 2;
	cam->vp.hh = wy / 2;
	s->dcs = cam->vp.hw / tan(FOV_W / 2 * M_PI / 180.0);
	cam->vp.u = ft_cross_vec(cam->n, cam->up);
	cam->vp.v = ft_cross_vec(cam->n, cam->vp.u);
	ft_get_n_vector(cam->vp.u, &cam->vp.u, 0);
	ft_get_n_vector(cam->vp.v, &cam->vp.v, 0);
	ft_get_viewplane_top_left_point(cam, s);
	ft_get_viewplane_top_right_point(cam, s);
	ft_get_viewplane_bottom_left_point(cam, s);
}
