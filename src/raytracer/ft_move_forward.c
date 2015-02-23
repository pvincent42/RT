/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_forward.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/25 12:17:42 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/26 17:21:36 by hjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

void							ft_move_forward(t_data *d)
{
	t_object					*cam;

	cam = ft_get_camera(d->scenes[d->cs], &d->scenes[d->cs]->cam_num);
	cam->p.x += cam->n.x * SPEED;
	cam->p.y += cam->n.y * SPEED;
	cam->p.z += cam->n.z * SPEED;
	ft_render_camera(cam, d->scenes[d->cs]);
	ft_draw_img(d);
	ft_draw_buttons(d->buttons, d);
}
