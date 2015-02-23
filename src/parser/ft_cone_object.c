/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cone_object.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:24:22 by rdavid            #+#    #+#             */
/*   Updated: 2014/02/22 16:24:23 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <rt.h>

int					ft_cone_object(char *str, int i)
{
	str += i;
	if (!ft_strncmp(str, "CONE", 4))
		return (CONE);
	return (-1);
}
