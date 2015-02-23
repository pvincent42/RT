/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cylinder_object.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:24:28 by rdavid            #+#    #+#             */
/*   Updated: 2014/02/22 16:24:28 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <rt.h>

int					ft_cylinder_object(char *str, int i)
{
	str += i;
	if (!ft_strncmp(str, "CYLINDER", 8))
		return (CYLINDER);
	return (-1);
}
