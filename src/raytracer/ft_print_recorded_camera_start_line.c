/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_recorded_camera_start_line.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/27 16:21:02 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/27 16:28:15 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <rt.h>

void			ft_print_recorded_camera_start_line(int fd)
{
	ft_putstr_fd("CAMERA { ", fd);
}
