/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_n_vector.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:29:50 by rdavid            #+#    #+#             */
/*   Updated: 2014/02/24 17:50:53 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <rt.h>

void			ft_get_n_vector(register const t_cd vec,
								register t_cd *const n_vec,
								register double hypo)
{
	if (hypo == 0)
		hypo = sqrt(vec.x * vec.x + vec.y * vec.y + vec.z * vec.z);
	n_vec->x = vec.x / hypo;
	n_vec->y = vec.y / hypo;
	n_vec->z = vec.z / hypo;
}
