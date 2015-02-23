/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 09:53:26 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/26 17:22:13 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

static size_t		ft_splitlen(char const *s, char c)
{
	size_t		j;
	size_t		len;

	len = 0;
	j = 0;
	if (!s)
		return (0);
	while (s[j] != '\0')
	{
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j] != '\0')
		{
			j++;
			if (s[j] == c || s[j] == '\0')
				len++;
		}
	}
	return (len);
}

char				**ft_strsplit(char const *s, char c)
{
	char		**a;
	size_t		v[4];

	if (!s || !(a = (char **)malloc(sizeof(char *) * ft_splitlen(s, c) + 1)))
		return (NULL);
	while (s[v[3]])
	{
		while (s[v[3]] == c)
			v[3]++;
		v[0] = s[v[3]] && s[v[3]] != c ? v[3] : v[0];
		while (s[v[3]] && s[v[3]] != c && (v[3] += 1))
			v[1]++;
		if ((!s[v[3]] || s[v[3]] == c)
			&& (a[v[2]++] = ft_strsub(s, v[0], v[1])))
		{
			v[1] = 0;
			v[0] = 0;
		}
	}
	a[ft_splitlen(s, c)] = '\0';
	return (a);
}
