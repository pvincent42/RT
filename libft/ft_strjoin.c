/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 09:49:12 by rdavid            #+#    #+#             */
/*   Updated: 2013/12/22 13:45:55 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*fresh;
	size_t		len1;
	size_t		len2;
	size_t		i;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!(fresh = (char *)malloc(sizeof(char) * (len1 + len2) + 1)))
		return (NULL);
	i = -1;
	while (++i < len1)
		fresh[i] = s1[i];
	i--;
	while (++i < len1 + len2)
		fresh[i] = s2[i - len1];
	fresh[i] = '\0';
	return (fresh);
}
