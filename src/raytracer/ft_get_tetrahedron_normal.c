/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_tetrahedron_normal.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/15 15:47:59 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/15 15:48:25 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

void			ft_get_tetrahedron_normal(register t_cd *const v_n,
										register const t_tdata *const td,
										register const t_object *const o,
										register const t_cd *const hp)
{
	(void)td;
	(void)hp;
	if (o->face == ABC)
		*v_n = o->tn1;
	else if (o->face == ABD)
		*v_n = o->tn2;
	else if (o->face == ACD)
		*v_n = o->tn3;
	else if (o->face == BCD)
		*v_n = o->tn4;
}
