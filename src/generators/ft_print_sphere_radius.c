/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_sphere_radius.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/05 10:42:27 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/05 10:43:24 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int				ft_print_sphere_radius(int fd, int r)
{
	ft_putstr_fd(" r ", fd);
	ft_putnbr_fd(r, fd);
	return (1);
}
