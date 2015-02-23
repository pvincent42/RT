/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strinstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/25 21:46:37 by rdavid            #+#    #+#             */
/*   Updated: 2014/02/25 21:46:39 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int				ft_strinstr(char *str1, char *str2)
{
	int			i;
	int			j;
	int			s2len;

	if (!str1 || !str2)
		return (0);
	s2len = ft_strlen(str2);
	i = -1;
	while (str1[++i])
	{
		j = 0;
		while (str2[j] && str2[j] == str1[i + j])
			j++;
		if (j == s2len)
			return (1);
	}
	return (0);
}
