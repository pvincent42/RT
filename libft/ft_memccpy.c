/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:16:51 by rdavid            #+#    #+#             */
/*   Updated: 2013/12/22 13:34:33 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	if (!dest || !src)
		return (NULL);
	while (n--)
	{
		*(char *)dest = *(char *)src;
		if (*(char *)src == c)
			return (dest + 1);
		dest++;
		src++;
	}
	return (NULL);
}
