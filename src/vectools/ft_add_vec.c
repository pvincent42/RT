/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_vec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:29:28 by rdavid            #+#    #+#             */
/*   Updated: 2014/02/22 16:29:29 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

t_cd			ft_add_vec(register const t_cd vec1, register const t_cd vec2)
{
	register const t_cd		vec =
	{
		vec1.x + vec2.x,
		vec1.y + vec2.y,
		vec1.z + vec2.z
	};

	return (vec);
}
