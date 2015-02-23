/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 20:09:46 by rdavid            #+#    #+#             */
/*   Updated: 2013/12/22 13:48:37 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*nstr;
	size_t		slen;
	size_t		i;

	if (!s)
		return (NULL);
	i = 0;
	slen = ft_strlen(s);
	if (!(nstr = (char *)malloc(sizeof(char) * slen + 1)))
		return (NULL);
	while (slen--)
	{
		nstr[i] = (*f)(i, s[i]);
		i++;
	}
	return (nstr);
}
