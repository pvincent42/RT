/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_scene_info.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjeannin <hjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:25:36 by hjeannin          #+#    #+#             */
/*   Updated: 2014/03/18 19:26:44 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

static void		ft_show_time(int time)
{
	char		*str_time;
	char		*tmp_time;
	int			i;
	int			j;

	ft_putstr("\033[034;1m[");
	ft_putnbr(time / 1000000);
	ft_putstr(".");
	str_time = ft_strnew(6);
	str_time = ft_memset(str_time, '0', 6);
	tmp_time = ft_itoa(time - (time / 1000000) * 1000000);
	i = 6 - ft_strlen(tmp_time);
	j = 0;
	while (tmp_time[j])
		str_time[i++] = tmp_time[j++];
	ft_putstr(str_time);
	free(str_time);
	free(tmp_time);
	ft_putstr("s] \033[0m");
}

void			ft_display_scene_info(char *name, int st, int time)
{
	if (st == 0)
	{
		ft_putstr("\033[31;1mCurrently rendering ");
		ft_putstr(name);
		ft_putendl("...\033[0m");
	}
	if (st == 1)
	{
		ft_show_time(time);
		ft_putstr("\033[32;1mRender done ! (");
		ft_putstr(name);
		ft_putendl(")\033[0m");
	}
}

void			ft_display_camera_info(int st, int cam, int max_cam)
{
	if (st == 0)
	{
		ft_putstr("\033[34;1m\t-\033[33;1m Camera ");
		ft_putstr("\033[34;1m[");
		ft_putnbr(cam + 1);
		ft_putstr("/");
		ft_putnbr(max_cam);
		ft_putstr("]\033[31;1m ... \033[0m");
	}
	if (st == 1)
		ft_putendl("\033[32;1mDone !\033[0m");
}
