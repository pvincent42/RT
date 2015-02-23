/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_object.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:25:55 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/14 19:52:33 by hjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <parser.h>

void				ft_get_object(t_scene *s, int fd, int type, char *line)
{
	if (type == SPHERE)
		ft_get_sphere(s, fd, line + 6);
	if (type == HALF_S)
		ft_get_half_sphere(s, fd, line + 6);
	if (type == DISC)
		ft_get_disc(s, fd, line + 4);
	if (type == CYLINDER)
		ft_get_cylinder(s, fd, line + 8);
	if (type == PLANE)
		ft_get_plane(s, fd, line + 5);
	if (type == CONE)
		ft_get_cone(s, fd, line + 4);
	if (type == QUADRIC)
		ft_get_quadric(s, fd, line + 7);
	if (type == TRIANGLE)
		ft_get_triangle(s, fd, line + 8);
	if (type == TETRAHEDRON)
		ft_get_tetrahedron(s, fd, line + 11);
}
