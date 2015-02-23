/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_sphere_field_scene_basics.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/12 01:38:25 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/21 13:54:16 by pvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <generators.h>
#include <libft.h>

static void		ft_put_message(int fd)
{
	ft_putendl_fd("SCENE { c 100 100 100 }", fd);
	ft_putendl_fd("BACKGROUND { 0 0 0 }", fd);
	ft_putendl_fd("SPOT { xyz -3000 1 3000 c 255 255 255 }", fd);
	ft_putendl_fd("SPOT { xyz 3000 1 3000 c 255 255 255 }", fd);
	ft_putendl_fd("SPOT { xyz -3000 1 -3000 c 255 255 255 }", fd);
	ft_putendl_fd("SPOT { xyz 3000 1 -3000 c 255 255 255 }", fd);
	ft_putendl_fd("SPOT { xyz 1 1 1 c 255 255 255 }", fd);
	ft_putendl_fd("PLANE { pxyz 1 2080 1 nxyz 0 1 0 c 107 107 107 "
				"adsb 30 100 1 1 }", fd);
}

void			ft_print_sphere_field_scene_basics(int fd)
{
	double		d;
	double		x;
	double		z;
	t_curve		c;
	int			y;

	d = 3000;
	x = d * 0.05;
	z = (d / 2) * (4.0 / 3.0);
	y = 1500;
	c.p0 = ft_set_vec(0, y, 0);
	c.p3 = ft_set_vec(d, y, 0);
	c.p1 = ft_set_vec(x, y, z);
	c.p2 = ft_set_vec(d - x, y, z);
	ft_print_camera_curve(fd, c, 50);
	c.p0 = ft_set_vec(d, y, 0);
	c.p3 = ft_set_vec(0, y, 0);
	c.p1 = ft_set_vec(d + x, y, -z);
	c.p2 = ft_set_vec(-x, y, -z);
	ft_print_camera_curve(fd, c, 50);
	ft_put_message(fd);
}
