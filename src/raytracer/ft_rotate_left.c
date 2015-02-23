/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_left.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/25 12:20:06 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/25 12:20:28 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

void							ft_rotate_left(t_data *d)
{
	t_object					*cam;

	cam = ft_get_camera(d->scenes[d->cs], &d->scenes[d->cs]->cam_num);
	cam->up.x += 0.05;
	ft_get_n_vector(cam->up, &cam->up, 0);
	ft_render_camera(cam, d->scenes[d->cs]);
	ft_draw_img(d);
	ft_draw_buttons(d->buttons, d);
}
