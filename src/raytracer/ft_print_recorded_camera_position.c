/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_recorded_camera_position.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/27 16:23:53 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/27 16:24:26 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <rt.h>

void			ft_print_recorded_camera_position(int fd, t_cd *p)
{
	ft_putstr_fd("p ", fd);
	ft_putnbr_fd((int)p->x, fd);
	ft_putchar_fd(' ', fd);
	ft_putnbr_fd((int)p->y, fd);
	ft_putchar_fd(' ', fd);
	ft_putnbr_fd((int)p->z, fd);
	ft_putchar_fd(' ', fd);
}
