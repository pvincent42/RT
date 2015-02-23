/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 18:59:23 by rdavid            #+#    #+#             */
/*   Updated: 2013/12/22 13:42:38 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strcpy(char *dest, const char *src)
{
	char		*tmp;

	tmp = dest;
	if (!dest || !src)
		return (NULL);
	while ((*tmp++ = *src++))
		;
	return (dest);
}
