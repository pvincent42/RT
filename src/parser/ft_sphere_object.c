/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sphere_object.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:28:41 by rdavid            #+#    #+#             */
/*   Updated: 2014/02/22 16:28:41 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <rt.h>

int					ft_sphere_object(char *str, int i)
{
	str += i;
	if (!ft_strncmp(str, "SPHERE", 6))
		return (SPHERE);
	return (-1);
}
