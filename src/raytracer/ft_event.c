/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_event.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjeannin <hjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:26:04 by hjeannin          #+#    #+#             */
/*   Updated: 2014/03/27 21:42:35 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <rt.h>

inline static void				ft_move(unsigned int *key, t_data *d)
{
	if (*key == MLX_KEY_W)
		ft_move_forward(d);
	if (*key == MLX_KEY_S)
		ft_move_backward(d);
	if (*key == MLX_KEY_A)
		ft_move_left(d);
	if (*key == MLX_KEY_D)
		ft_move_right(d);
	if (*key == MLX_KEY_U)
		ft_rotate_left(d);
	if (*key == MLX_KEY_O)
		ft_rotate_right(d);
	if (*key == MLX_KEY_K)
		ft_rotate_down(d);
	if (*key == MLX_KEY_I)
		ft_rotate_up(d);
	if (*key == MLX_KEY_L)
		ft_turn_right(d);
	if (*key == MLX_KEY_J)
		ft_turn_left(d);
}

static void						ft_record_key(t_data *d,
											unsigned int key)
{
	if (key == MLX_KEY_R && !d->recording)
		d->recording = 1;
	else if (key == MLX_KEY_R && d->recording)
		d->recording = 0;
	if (d->recording)
	{
		mlx_string_put(d->init, d->win, 10, 1350, 0xFF0000,
						"RECORDING");
		ft_record_camera(d->scenes[d->cs], ft_get_camera(d->scenes[d->cs],
						&d->scenes[d->cs]->cam_num),
						d->scenes[d->cs]->name);
	}
	else
	{
		mlx_string_put(d->init, d->win, 10, 1350, 0x000000,
						"RECORDING");
	}
}

int								ft_event(unsigned int key, t_data *d)
{
	static const t_key_type		key_func[] = {

	{ &ft_down_key },
	{ &ft_left_key },
	{ &ft_up_key },
	{ &ft_right_key } };
	if (key == MLX_ESC_KEY)
		ft_esc_key(d);
	if (key == MLX_DOWN_KEY || key == MLX_LEFT_KEY
		|| key == MLX_UP_KEY || key == MLX_RIGHT_KEY)
		key_func[key % 4].f(d);
	ft_record_key(d, key);
	ft_move(&key, d);
	return (0);
}
