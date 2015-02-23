/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_recorded_camera_up_vector.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/27 16:26:53 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/27 16:28:38 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <rt.h>

void			ft_print_recorded_camera_up_vector(int fd, t_cd *u)
{
	ft_putstr_fd("u ", fd);
	ft_putnbr_fd((int)(u->x * 100.0), fd);
	ft_putchar_fd(' ', fd);
	ft_putnbr_fd((int)(u->y * 100.0), fd);
	ft_putchar_fd(' ', fd);
	ft_putnbr_fd((int)(u->z * 100.0), fd);
	ft_putchar_fd(' ', fd);
}
