/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_record_camera.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/27 15:54:07 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/27 20:31:53 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <rt.h>
#include <libft.h>

static void		ft_copy_file(t_scene *s, int fd_record, char *name)
{
	int			fd;
	char		*line;

	line = NULL;
	if ((fd = open(name, O_RDWR, 0644)) < 0)
		exit(-42);
	while (ft_get_next_line(fd, &line) > 0)
	{
		ft_putendl_fd(line, fd_record);
		free(line);
	}
	free(line);
	s->record_file_created = 1;
}

void			ft_record_camera(t_scene *s, t_object *cam, char *name)
{
	int			fd;
	char		*tmp;
	char		*tmp2;

	tmp2 = ft_strsub(name, 0, ft_strlen(name) - 3);
	tmp = ft_strjoin(tmp2, "-record.sc");
	if ((fd = open(tmp, O_CREAT | O_RDWR | O_APPEND, 0644)) < 0)
		exit(-42);
	free(tmp);
	free(tmp2);
	if (!s->record_file_created)
		ft_copy_file(s, fd, name);
	ft_print_recorded_camera_start_line(fd);
	ft_print_recorded_camera_position(fd, &cam->p);
	ft_print_recorded_camera_normal_vector(fd, &cam->n);
	ft_print_recorded_camera_up_vector(fd, &cam->up);
	ft_print_recorded_camera_end_line(fd);
	close(fd);
}
