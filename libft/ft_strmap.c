/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 19:58:20 by rdavid            #+#    #+#             */
/*   Updated: 2013/12/22 13:57:18 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char		*nstr;
	size_t		i;
	size_t		slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	i = 0;
	if (!(nstr = (char *)malloc(sizeof(char) * slen + 1)))
		return (NULL);
	while (slen--)
	{
		nstr[i] = (*f)(s[i]);
		i++;
	}
	return (nstr);
}
