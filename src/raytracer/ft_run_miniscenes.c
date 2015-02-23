/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_run_miniscenes.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/05 14:47:16 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/26 12:49:40 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <mlx.h>
#include <stdlib.h>
#include <parser.h>

inline static void			ft_init_miniscene(t_scene *s, t_data *d,
												t_object *cam, int *i)
{
	s->cam = cam;
	s->sx = d->buttons[*i]->w - 4;
	s->sy = d->buttons[*i]->h - 4;
}

void						*ft_run_miniscenes(void *vd)
{
	t_scene		*s;
	t_data		*d;
	int			i;
	t_object	cam;

	d = (t_data *)vd;
	i = -1;
	while (++i < d->sl)
	{
		srandom(time(NULL));
		s = d->scenes[i];
		cam = *s->cams->begin->o;
		ft_init_miniscene(s, d, &cam, &i);
		ft_get_cam_viewplane(s->cam, s, s->sx, s->sy);
		s->xi = ft_sub_vec(s->cam->vp.trp, s->cam->vp.tlp);
		ft_get_n_vector(s->xi, &s->xi, 0);
		s->yi = ft_sub_vec(s->cam->vp.blp, s->cam->vp.tlp);
		ft_get_n_vector(s->yi, &s->yi, 0);
		s->mini_img.data = mlx_new_image(d->init, s->sx, s->sy);
		ft_get_image_data(&s->mini_img);
		s->mini_img_done = 0;
		ft_ray_caster(s);
		s->mini_img_done = 1;
	}
	return (NULL);
}
