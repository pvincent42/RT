/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_disc_object.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:24:33 by rdavid            #+#    #+#             */
/*   Updated: 2014/02/22 16:24:33 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <rt.h>

int					ft_disc_object(char *str, int i)
{
	str += i;
	if (!ft_strncmp(str, "DISC", 4))
		return (DISC);
	return (-1);
}
