/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 18:07:35 by rdavid            #+#    #+#             */
/*   Updated: 2013/12/22 13:46:44 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		i;
	size_t		j;
	size_t		dstlen;

	dstlen = ft_strlen(dest);
	if (dstlen >= size)
		return (size + ft_strlen(src));
	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (j < size - dstlen - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dstlen + ft_strlen(src));
}
