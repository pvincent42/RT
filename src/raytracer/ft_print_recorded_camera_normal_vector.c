/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_recorded_camera_normal_vector.c           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/27 16:25:29 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/27 16:26:09 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <rt.h>

void			ft_print_recorded_camera_normal_vector(int fd, t_cd *n)
{
	ft_putstr_fd("n ", fd);
	ft_putnbr_fd((int)(n->x * 100.0), fd);
	ft_putchar_fd(' ', fd);
	ft_putnbr_fd((int)(n->y * 100.0), fd);
	ft_putchar_fd(' ', fd);
	ft_putnbr_fd((int)(n->z * 100.0), fd);
	ft_putchar_fd(' ', fd);
}
