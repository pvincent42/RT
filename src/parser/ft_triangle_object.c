/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_triangle_object.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/05 11:01:51 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/22 18:20:40 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <rt.h>

int				ft_triangle_object(char *str, int i)
{
	str += i;
	if (!ft_strncmp(str, "TRIANGLE", 8))
		return (TRIANGLE);
	return (-1);
}
