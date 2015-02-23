/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 13:03:43 by rdavid            #+#    #+#             */
/*   Updated: 2013/12/22 13:35:28 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		p1;
	unsigned char		p2;

	if (!s1 || !s2 || s1 == s2)
		return (0);
	while (n-- > 0)
	{
		p1 = *(unsigned long *)s1;
		p2 = *(unsigned long *)s2;
		if (p1 != p2)
			return (p1 - p2);
		s1++;
		s2++;
	}
	return (0);
}
