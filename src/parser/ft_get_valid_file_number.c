/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_valid_file_number.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:26:39 by rdavid            #+#    #+#             */
/*   Updated: 2014/02/22 16:26:39 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <parser.h>

int					ft_get_valid_file_number(char **argv)
{
	int				i;
	int				len;
	int				fd;

	len = 0;
	i = 0;
	fd = 0;
	while (argv[++i])
	{
		if (ft_valid_name(argv[i]))
		{
			if ((fd = open(argv[i], O_RDONLY)) != -1)
			{
				len++;
				close(fd);
			}
		}
	}
	return (len);
}
