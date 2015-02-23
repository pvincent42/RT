/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_scene_basics.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/05 18:55:20 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/19 20:37:19 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

void			ft_print_scene_basics(int fd)
{
	ft_putstr_fd("SCENE { c 10 10 10 ", fd);
	ft_putstr_fd("seed ", fd);
	ft_putnbr_fd(random() % 10000000, fd);
	ft_putendl_fd(" }", fd);
	ft_putendl_fd("BACKGROUND { 0 0 0 }", fd);
	ft_putendl_fd("CAMERA { p 800 -220 -1662 n 0 40 100 u 0 1 0 }", fd);
	ft_putendl_fd("SPOT { xyz -200 0 -1000 c 255 255 255 }\n", fd);
	ft_putendl_fd("SPOT { xyz 200 0 -1000 c 255 255 255 }\n", fd);
}
