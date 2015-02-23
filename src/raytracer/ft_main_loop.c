/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main_loop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/26 19:13:59 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/26 19:35:13 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <mlx.h>
#include <parser.h>

inline static int		ft_expose_hook(t_data *d)
{
	ft_draw_buttons(d->buttons, d);
	ft_draw_img(d);
	return (1);
}

void					ft_main_loop(char **argv, t_data *d)
{
	pthread_t			scenes_init;

	if (!ft_get_all_scenes(argv, d))
		exit(-42);
	d->cs = 0;
	if (!(d->buttons = ft_create_buttons(d)))
		exit(-42);
	ft_run_miniscenes(d);
	pthread_create(&scenes_init, NULL, ft_run_scenes, d);
	ft_draw_img(d);
	ft_draw_buttons(d->buttons, d);
	mlx_expose_hook(d->win, ft_expose_hook, d);
	mlx_key_hook(d->win, ft_event, d);
	mlx_hook(d->win, 1, 1, ft_event, d);
	mlx_mouse_hook(d->win, ft_mouse_hook, d);
	mlx_loop_hook(d->init, ft_loop_hook, d);
	mlx_loop(d->init);
}
