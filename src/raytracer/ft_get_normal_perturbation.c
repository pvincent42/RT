/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_normal_perturbation.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/15 15:49:19 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/25 05:11:49 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>
#include <noise.h>

void			ft_get_normal_perturbation(register t_cd *const v_n,
											register const t_tdata *const td,
											register const t_object *const o)
{
	v_n->x *= ft_noise_4(&o->ns, &td->hp.x, &td->hp.y, &td->hp.z);
	v_n->y *= ft_noise_4(&o->ns, &td->hp.x, &td->hp.y, &td->hp.z);
	v_n->z *= ft_noise_4(&o->ns, &td->hp.x, &td->hp.y, &td->hp.z);
}
