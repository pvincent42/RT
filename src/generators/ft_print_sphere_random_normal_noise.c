/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_sphere_random_normal_noise.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/06 13:21:02 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/19 20:40:59 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <rt.h>

int			ft_print_sphere_random_normal_noise(int fd)
{
	if (ft_rand(0, 4) == 1)
		ft_putstr_fd("normal", fd);
	return (1);
}
