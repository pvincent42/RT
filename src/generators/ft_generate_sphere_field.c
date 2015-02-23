/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generate_sphere_field.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/12 01:34:04 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/26 19:12:16 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <generators.h>

int					ft_generate_sphere(t_sphere *s, int max, int n)
{
	s[n].r = ft_rand(LIMIT_R_MIN, LIMIT_R_MAX);
	s[n].c.x = ft_rand(-LIMIT_X + s[n].r, LIMIT_X - s[n].r);
	s[n].c.y = LIMIT_Y - s[n].r;
	s[n].c.z = ft_rand(LIMIT_Z_MIN + s[n].r, LIMIT_Z_MAX - s[n].r);
	if (ft_sphere_overlap(s, max, n))
		ft_generate_sphere(s, max, n);
	return (1);
}

int					ft_generate_central_sphere(t_sphere *s)
{
	s[0].r = LIMIT_R_MAX * 2;
	s[0].c.x = LIMIT_X / 2;
	s[0].c.y = LIMIT_Y - s[0].r;
	s[0].c.z = 0;
	return (1);
}

void				ft_generate_spheres(int fd, t_sphere *o, const int max)
{
	int				n;

	ft_print_sphere_field_scene_basics(fd);
	ft_generate_central_sphere(o);
	o[0].g = ft_random_gen();
	ft_print_sphere(fd, o[0].c, o[0].g, o[0].r);
	n = 0;
	while (++n < max)
	{
		ft_generate_sphere(o, max, n);
		o[n].g = ft_random_gen();
		ft_print_sphere(fd, o[n].c, o[n].g, o[n].r);
	}
}

int					ft_generate_sphere_field(char **files)
{
	int				fd;
	t_grid			grid;
	const int		max = 100;
	t_sphere		*o;

	srandom(time(NULL));
	grid.id = 0;
	while (files[++grid.id])
	{
		if (files[grid.id][0] != '-')
		{
			if ((fd =
				open(files[grid.id], O_TRUNC | O_CREAT | O_RDWR, 0644)) == -1)
				exit(-42);
			if (!(o = (t_sphere *)malloc(sizeof(t_sphere) * max)))
				exit(-42);
			ft_generate_spheres(fd, o, max);
			free(o);
			close(fd);
		}
	}
	return (1);
}
