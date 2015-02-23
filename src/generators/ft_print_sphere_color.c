/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_sphere_color.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/05 10:43:37 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/12 21:32:36 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <generators.h>
#include <libft.h>

int				ft_print_sphere_color(int fd, t_gen gen)
{
	ft_putstr_fd(" c ", fd);
	ft_putnbr_fd(gen.c[0], fd);
	ft_putchar_fd(' ', fd);
	ft_putnbr_fd(gen.c[1], fd);
	ft_putchar_fd(' ', fd);
	ft_putnbr_fd(gen.c[2], fd);
	return (1);
}
