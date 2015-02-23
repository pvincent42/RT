/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_object_type.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:26:00 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/14 19:41:16 by hjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <parser.h>

int					ft_get_object_type(char *str, int i)
{
	int				type;

	type = -1;
	type = ft_sphere_object(str, i);
	type = (type == -1) ? ft_cylinder_object(str, i) : type;
	type = (type == -1) ? ft_plane_object(str, i) : type;
	type = (type == -1) ? ft_cone_object(str, i) : type;
	type = (type == -1) ? ft_half_sphere_object(str, i) : type;
	type = (type == -1) ? ft_disc_object(str, i) : type;
	type = (type == -1) ? ft_quadric_object(str, i) : type;
	type = (type == -1) ? ft_triangle_object(str, i) : type;
	type = (type == -1) ? ft_tetrahedron_object(str, i) : type;
	return (type);
}
