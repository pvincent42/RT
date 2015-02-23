/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_all_scenes.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:24:38 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/21 16:56:05 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <parser.h>

int					ft_get_all_scenes(char **argv, t_data *d)
{
	t_file			*files;
	int				i;
	int				len;

	len = 0;
	files = NULL;
	if (!(files = ft_get_valid_files(argv, &len)))
		return (0);
	if (!(d->scenes = (t_scene **)malloc(sizeof(t_scene *) * (len + 1))))
		return (0);
	i = -1;
	d->sl = len;
	while (++i < len)
	{
		if (!(d->scenes[i] = ft_read_scene(d, files[i].fd, files[i].name)))
			return (0);
	}
	d->scenes[len] = NULL;
	ft_close_files(files, len);
	return (1);
}
