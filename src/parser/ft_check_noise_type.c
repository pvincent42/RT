/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_noise_type.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/02 06:40:29 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/02 06:43:39 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <parser.h>

int				ft_check_noise_type(char *l)
{
	if (ft_strinstr(l, "wood"))
		return (WOOD);
	if (ft_strinstr(l, "marble"))
		return (MARBLE);
	if (ft_strinstr(l, "cloud"))
		return (CLOUD);
}
