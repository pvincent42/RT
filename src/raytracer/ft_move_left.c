/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_left.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/25 12:19:39 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/26 17:21:01 by hjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

void							ft_move_left(t_data *d)
{
	t_object					*cam;
	t_cd						v;

	cam = ft_get_camera(d->scenes[d->cs], &d->scenes[d->cs]->cam_num);
	v = ft_cross_vec(cam->n, cam->up);
	cam->p.x += v.x * SPEED;
	cam->p.y += v.y * SPEED;
	cam->p.z += v.z * SPEED;
	ft_render_camera(cam, d->scenes[d->cs]);
	ft_draw_img(d);
	ft_draw_buttons(d->buttons, d);
}
