/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quadric_object.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/28 23:12:34 by rdavid            #+#    #+#             */
/*   Updated: 2014/02/28 23:13:31 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <rt.h>

int					ft_quadric_object(char *str, int i)
{
	str += i;
	if (!ft_strncmp(str, "QUADRIC", 7))
		return (QUADRIC);
	return (-1);
}
