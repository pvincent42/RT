/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_object_normal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/15 15:48:40 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/15 15:49:04 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

void			ft_get_object_normal(register t_cd *const v_n,
									register const t_tdata *const td,
									register const t_object *const o,
									register const t_cd *const hp)
{
	(void)td;
	(void)hp;
	*v_n = o->n;
}
