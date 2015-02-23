/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_valid_files.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:26:46 by rdavid            #+#    #+#             */
/*   Updated: 2014/02/22 16:26:46 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <parser.h>

t_file			*ft_get_valid_files(char **argv, int *len)
{
	t_file		*files;
	int			j;
	int			i;
	int			fd;

	files = NULL;
	if (!(*len = ft_get_valid_file_number(argv)))
		return (NULL);
	if (!(files = (t_file *)malloc(sizeof(t_file) * (*len))))
		return (NULL);
	i = 0;
	j = 0;
	while (argv[++i])
	{
		fd = 0;
		if (ft_valid_name(argv[i]) && ((fd = open(argv[i], O_RDONLY)) != -1))
		{
			files[j].fd = fd;
			files[j].name = argv[i];
			j++;
		}
	}
	return (files);
}
