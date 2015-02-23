/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 16:32:11 by rdavid            #+#    #+#             */
/*   Updated: 2013/12/22 13:56:13 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t		i;

	if (!dest || !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		if (i < ft_strlen(dest) + 1)
		{
			dest[i] = src[i];
			i++;
		}
		else
			dest[i++] = '\0';
	}
	return (dest);
}
