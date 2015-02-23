/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_number.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:25:34 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/22 17:41:47 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

double			ft_get_next_number(char *str, int *i)
{
	double		num;
	int			j;

	num = 0.0;
	while (!ft_isdigit(str[*i]))
		*i += 1;
	j = *i - 1;
	while (ft_isdigit(str[*i]))
	{
		num = num * 10 + str[*i] - 48;
		*i += 1;
	}
	if (str[j] == '-')
		num = -num;
	return (num);
}
