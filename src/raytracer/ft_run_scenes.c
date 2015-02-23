/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_run_scenes.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjeannin <hjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:27:16 by hjeannin          #+#    #+#             */
/*   Updated: 2014/03/25 07:10:44 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <rt.h>
#include <libft.h>

inline static void		ft_run_cameras(t_scene *s)
{
	t_elem				*camrunner;

	camrunner = s->cams->begin;
	s->cam_num = 0;
	while (camrunner)
	{
		ft_display_camera_info(0, s->cam_num, s->cams->size);
		s->cam = camrunner->o;
		s->xi = ft_sub_vec(s->cam->vp.trp, s->cam->vp.tlp);
		ft_get_n_vector(s->xi, &s->xi, 0);
		s->yi = ft_sub_vec(s->cam->vp.blp, s->cam->vp.tlp);
		ft_get_n_vector(s->yi, &s->yi, 0);
		ft_ray_caster(s);
		camrunner = camrunner->next;
		++s->cam_num;
		ft_display_camera_info(1, 0, 0);
	}
}

void					*ft_run_scenes(void *vd)
{
	t_scene				*s;
	t_data				*d;
	int					elapsed_time;
	int					i;

	d = (t_data *)vd;
	i = -1;
	srandom(time(NULL));
	while (++i < d->sl)
	{
		gettimeofday(&d->st, NULL);
		s = d->scenes[i];
		s->sx = d->wx;
		s->sy = d->wy;
		ft_display_scene_info(s->name, 0, 0);
		ft_run_cameras(s);
		gettimeofday(&d->ed, NULL);
		elapsed_time = (int)((d->ed.tv_sec - d->st.tv_sec) * 1000000
					+ d->ed.tv_usec - d->st.tv_usec);
		ft_display_scene_info(s->name, 1, elapsed_time);
		d->buttons[i]->scene_status = 1;
		d->scene_done = 1;
	}
	return (NULL);
}
