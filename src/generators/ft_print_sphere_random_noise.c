/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_sphere_random_noise.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvincent <pvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/23 07:17:59 by pvincent          #+#    #+#             */
/*   Updated: 2014/03/23 07:18:07 by pvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <rt.h>
#include <libft.h>
#include <stdio.h>

int				ft_print_sphere_random_noise(int fd)
{
	int			i;

	i = random() % MAX_NOISE;
	ft_putnbr_fd(i, fd);
	return (1);
}
