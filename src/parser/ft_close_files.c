/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close_files.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:23:35 by rdavid            #+#    #+#             */
/*   Updated: 2014/02/22 16:23:35 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <parser.h>

void				ft_close_files(t_file *files, int len)
{
	int				i;

	if (files != NULL && len > 0)
	{
		i = -1;
		while (++i < len)
			close(files[i].fd);
		free(files);
	}
}
