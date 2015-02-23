/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_scene.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/11 21:38:11 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/24 00:57:47 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <parser.h>
#include <libft.h>

t_scene					*ft_read_scene(t_data *d, int fd, char *name)
{
	char			*line;
	t_scene			*s;

	if (!(s = (t_scene *)malloc(sizeof(t_scene))))
		return (NULL);
	ft_init_scene(s, name);
	line = NULL;
	while (ft_get_next_line(fd, &line) != 0)
	{
		ft_check_scene(s, line);
		ft_check_camera(s, line, d);
		ft_check_background(s, line);
		if (!ft_strncmp(line, "SPOT", 4))
			ft_get_spot(s, fd, line);
		ft_get_object(s, fd, ft_get_object_type(line, 0), line);
		free(line);
	}
	free(line);
	ft_assign_noise_tables(s);
	ft_init_scene_imgs(s, d);
	return (s);
}
