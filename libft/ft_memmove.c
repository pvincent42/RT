/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 09:56:44 by rdavid            #+#    #+#             */
/*   Updated: 2013/12/22 13:56:38 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char		*tmpsrc;
	char			*tmpdest;

	tmpsrc = src;
	tmpdest = dest;
	if (!n)
		return (dest);
	if (dest <= src)
		return (ft_memcpy(dest, src, n));
	tmpsrc += n;
	tmpdest += n;
	while (n--)
		*(--tmpdest) = *(--tmpsrc);
	return (dest);
}
