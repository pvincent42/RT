/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_sphere_position.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/05 10:41:01 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/12 21:33:14 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <generators.h>
#include <libft.h>

int				ft_print_sphere_position(int fd, t_ci cur)
{
	ft_putstr_fd(" p ", fd);
	ft_putnbr_fd(cur.x, fd);
	ft_putchar_fd(' ', fd);
	ft_putnbr_fd(cur.y, fd);
	ft_putchar_fd(' ', fd);
	ft_putnbr_fd(cur.z, fd);
	return (1);
}
