/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:30:25 by rdavid            #+#    #+#             */
/*   Updated: 2013/12/22 13:53:45 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	const char		*tmp1;
	const char		*tmp2;

	if ((!s1 || !s2))
		return (NULL);
	if (s2[0] == '\0')
		return ((char *)s1);
	while (*s1 != 0 && *s2 != 0)
	{
		tmp1 = s1;
		tmp2 = s2;
		while ((*tmp2 != 0) && (*tmp1 == *tmp2))
		{
			tmp1++;
			tmp2++;
		}
		if (*tmp2 == 0)
			return ((char *)s1);
		else
			s1++;
	}
	return (NULL);
}
