/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generate_y_layer.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/05 19:54:02 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/12 21:31:48 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <generators.h>

void			ft_generate_y_layer(t_grid_obj *obj, t_grid *grid, int fd)
{
	t_gen		gen;

	obj->x = -1;
	grid->cur.x = 0;
	while (++obj->x < 12)
	{
		gen = ft_random_gen();
		ft_print_sphere(fd, grid->cur, gen, obj->r);
		grid->cur.x += grid->i.x;
	}
	grid->cur.y += grid->j.y;
}
