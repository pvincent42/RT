/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generate_material_grid.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/04 14:56:15 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/27 15:45:01 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <generators.h>

static void			ft_generate_material_spheres(t_grid_obj *sphere,
												t_grid *grid, int fd)
{
	while (++sphere->z < 1)
	{
		sphere->y = -1;
		grid->cur.y = 0;
		while (++sphere->y < 8)
			ft_generate_y_layer(sphere, grid, fd);
		grid->cur.z += grid->k.z;
	}
}

int					ft_generate_material_grid(char **files)
{
	int				fd;
	t_grid			grid;
	t_grid_obj		sphere;

	srandom(time(NULL));
	grid.id = 0;
	while (files[++grid.id])
	{
		if (files[grid.id][0] != '-')
		{
			ft_set_grid_obj(&sphere);
			ft_set_grid(&grid, &sphere);
			fd = open(files[grid.id], O_TRUNC | O_CREAT | O_RDWR, 0644);
			if (fd < 0)
				exit(-42);
			ft_generate_material_spheres(&sphere, &grid, fd);
			ft_print_scene_basics(fd);
		}
	}
	return (1);
}
