/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_recorded_camera_end_line.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/27 16:22:46 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/27 18:19:23 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <rt.h>

void			ft_print_recorded_camera_end_line(int fd)
{
	ft_putendl_fd(" } (recorded)", fd);
}
