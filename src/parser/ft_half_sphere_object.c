/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_half_sphere_object.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:27:16 by rdavid            #+#    #+#             */
/*   Updated: 2014/02/22 16:27:16 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <rt.h>

int					ft_half_sphere_object(char *str, int i)
{
	str += i;
	if (!ft_strncmp(str, "HALF_S", 6))
		return (HALF_S);
	return (-1);
}
