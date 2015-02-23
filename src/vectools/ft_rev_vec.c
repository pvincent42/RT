/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_vec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:30:00 by rdavid            #+#    #+#             */
/*   Updated: 2014/02/22 16:30:00 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

t_cd			ft_rev_vec(register const t_cd vec)
{
	register const t_cd		v =
	{
		-vec.x,
		-vec.y,
		-vec.z
	};

	return (v);
}
