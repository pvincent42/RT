/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_vector.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/22 18:50:11 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/24 06:22:56 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

t_cd			ft_get_vector(register const t_cd *const start,
							register const t_cd *const end)
{
	register const t_cd		vec =
	{
		end->x - start->x,
		end->y - start->y,
		end->z - start->z
	};

	return (vec);
}
