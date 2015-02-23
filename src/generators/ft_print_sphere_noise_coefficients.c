/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_sphere_noise_coefficients.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/05 10:45:56 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/19 20:42:05 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <generators.h>
#include <libft.h>

int				ft_print_sphere_noise_coefficients(int fd, t_gen gen)
{
	ft_putstr_fd(" noise ", fd);
	ft_print_sphere_random_noise(fd);
	ft_putstr_fd(" color ", fd);
	ft_putnbr_fd(gen.ns[0], fd);
	ft_putchar_fd(' ', fd);
	ft_putnbr_fd(gen.ns[1], fd);
	ft_putchar_fd(' ', fd);
	ft_putnbr_fd(gen.ns[2], fd);
	ft_putchar_fd(' ', fd);
	ft_putnbr_fd(gen.ns[3], fd);
	ft_putchar_fd(' ', fd);
	ft_putnbr_fd(gen.ns[4], fd);
	return (1);
}
