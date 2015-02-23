/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_camera.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:23:16 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/07 10:00:29 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <parser.h>
#include <libft.h>

static void			ft_ajust_camera_position(t_object *camera)
{
	if (camera->p.x == 0.0)
		camera->p.x = 1.0;
	if (camera->p.y == 0.0)
		camera->p.y = 1.0;
	if (camera->p.z == 0.0)
		camera->p.z = 1.0;
}

void				ft_check_camera(t_scene *s, char *line, t_data *d)
{
	int				i;
	t_object		*cam;

	if (!ft_strncmp(line, "CAMERA", 6))
	{
		i = 6;
		if (!(cam = (t_object *)malloc(sizeof(t_object))))
			exit(ft_error("Could not allocate camera !\n"));
		if (ft_strc(line, 'p'))
		{
			cam->p = ft_get_next_point(line, &i);
			ft_ajust_camera_position(cam);
		}
		if (ft_strc(line, 'n'))
			cam->n = ft_get_next_point(line, &i);
		if (ft_strc(line, 'u'))
			cam->up = ft_get_next_point(line, &i);
		ft_get_n_vector(cam->n, &cam->n, 0);
		cam->p.z = cam->p.z == 0.0 ? 0.1 : cam->p.z;
		ft_get_cam_viewplane(cam, s, d->wx, d->wy);
		ft_list_push_back(s->cams, cam);
	}
}
