/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_sphere.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/05 10:49:58 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/19 19:46:34 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <generators.h>
#include <libft.h>

int			ft_print_sphere(int fd, t_ci cur, t_gen gen, int r)
{
	ft_putstr_fd("SPHERE {", fd);
	ft_print_sphere_position(fd, cur);
	ft_print_sphere_normal(fd);
	ft_print_sphere_radius(fd, r);
	ft_print_sphere_color(fd, gen);
	ft_print_sphere_light_coefficients(fd, gen);
	ft_print_sphere_noise_coefficients(fd, gen);
	ft_print_sphere_endline(fd);
	return (1);
}
