/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_run_thread.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/15 17:08:34 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/26 11:44:56 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <rt.h>

inline static void			ft_op_put_pixel(t_image *img, const int *x,
											const int *y, const int *cl)
{
	const int		res = ((*x) * (img->bpp / sizeof(char *))

	+ ((*y) * img->sizeline));
	img->p_data[res] = *cl;
	img->p_data[res + 1] = (*cl) >> 8;
	img->p_data[res + 2] = (*cl) >> 16;
}

inline static void			ft_apply_effect(t_tdata *d, int *bg)
{
	double								effect[3];
	static const t_image_effect			f_effect[] = {

	{ &ft_negative_effect },
	{ &ft_sepia_effect } };
	if (d->s->effect != NO_EFFECT)
	{
		f_effect[d->s->effect].f(effect, d->fc);
		*bg = ft_get_color(&effect[0], &effect[1], &effect[2]);
	}
	else
	{
		d->fc[0] *= 255;
		d->fc[1] *= 255;
		d->fc[2] *= 255;
		*bg = ft_get_color(&d->fc[0], &d->fc[1], &d->fc[2]);
	}
}

inline static void			ft_draw_thread_pixel(t_tdata *d, const int x,
												const int y)
{
	int									bg;
	t_ray								r;

	d->fc[0] = 0.0;
	d->fc[1] = 0.0;
	d->fc[2] = 0.0;
	ft_get_ray(&r, d->s->cam, &d->p);
	bg = ft_ray_tracer(d, &r, 0, 0);
	if (bg == -1)
		ft_apply_effect(d, &bg);
	if (d->s->mini_img_done)
		ft_op_put_pixel(&d->s->img[d->cam_num], &x, &y, &bg);
	else
		ft_op_put_pixel(&d->s->mini_img, &x, &y, &bg);
	ft_inc_x(&d->p, d->xi);
}

void						*ft_run_thread(void *td)
{
	t_tdata		*d;
	int			x;
	int			y;

	d = (t_tdata *)td;
	y = d->y;
	while (y < d->y + d->tl)
	{
		ft_set_x(&d->p, d->s->cam->vp.tlp, y, d->yi);
		x = -1;
		while (++x < d->wx)
			ft_draw_thread_pixel(d, x, y);
		ft_inc_y(&d->p, d->yi);
		++y;
	}
	return (NULL);
}
