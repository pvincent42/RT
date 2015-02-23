/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_turn_left.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjeannin <hjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/26 16:43:13 by hjeannin          #+#    #+#             */
/*   Updated: 2014/03/27 17:36:22 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

void							ft_turn_left(t_data *d)
{
	t_object					*cam;

	cam = ft_get_camera(d->scenes[d->cs], &d->scenes[d->cs]->cam_num);
	cam->n.x -= 0.04;
	ft_get_n_vector(cam->up, &cam->up, 0);
	ft_render_camera(cam, d->scenes[d->cs]);
	ft_draw_img(d);
	ft_draw_buttons(d->buttons, d);
}
