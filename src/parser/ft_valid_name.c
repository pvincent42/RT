/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_name.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:28:52 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/27 20:31:09 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <rt.h>
#include <libft.h>

int				ft_valid_name(char *n)
{
	int			len[2];
	char		*ext;
	int			i;

	i = -1;
	ext = ft_strnew(ft_strlen(EXT));
	ext = ft_strcpy(ext, EXT);
	len[1] = ft_strlen(EXT);
	len[0] = ft_strlen(n);
	if (len[0] < len[1])
	{
		free(ext);
		return (0);
	}
	n += len[0];
	while (ext[++i])
	{
		if (n[-i - 1] != ext[len[1] - i - 1])
		{
			free(ext);
			return (0);
		}
	}
	free(ext);
	return (1);
}
