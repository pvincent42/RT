/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_plane_object.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:28:29 by rdavid            #+#    #+#             */
/*   Updated: 2014/02/22 16:28:29 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <rt.h>

int					ft_plane_object(char *str, int i)
{
	str += i;
	if (!ft_strncmp(str, "PLANE", 5))
		return (PLANE);
	return (-1);
}
