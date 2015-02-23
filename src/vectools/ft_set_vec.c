/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_vec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:30:04 by rdavid            #+#    #+#             */
/*   Updated: 2014/02/22 16:30:05 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

t_cd			ft_set_vec(register const double x,
							register const double y,
							register const double z)
{
	register const t_cd		vec = { x, y, z };

	return (vec);
}
