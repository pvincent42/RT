/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_sphere_light_coefficients.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/05 10:44:46 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/12 21:32:47 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <generators.h>
#include <libft.h>

int				ft_print_sphere_light_coefficients(int fd, t_gen gen)
{
	ft_putstr_fd(" adsb ", fd);
	ft_putnbr_fd(gen.kf[0], fd);
	ft_putchar_fd(' ', fd);
	ft_putnbr_fd(gen.kf[1], fd);
	ft_putchar_fd(' ', fd);
	ft_putnbr_fd(gen.kf[2], fd);
	ft_putchar_fd(' ', fd);
	ft_putnbr_fd(gen.kf[3], fd);
	return (1);
}
