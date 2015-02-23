/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_half_sphere_normal.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/15 15:51:51 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/15 15:52:14 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

void			ft_get_half_sphere_normal(register t_cd *const v_n,
										register const t_tdata *const td,
										register const t_object *const o,
										register const t_cd *const hp)
{
	*v_n = ft_sub_vec(*hp, o->p);
	if (td->side == INSIDE)
		*v_n = ft_rev_vec(*v_n);
}
