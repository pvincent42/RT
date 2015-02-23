/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetrahedron_object.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjeannin <hjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/14 19:38:26 by hjeannin          #+#    #+#             */
/*   Updated: 2014/03/22 18:18:48 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <rt.h>

int				ft_tetrahedron_object(char *str, int i)
{
	str += i;
	if (!ft_strncmp(str, "TETRAHEDRON", 11))
		return (TETRAHEDRON);
	return (-1);
}
