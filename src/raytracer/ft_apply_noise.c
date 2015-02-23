/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_noise.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/15 16:21:09 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/27 18:54:24 by pvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>
#include <noise.h>

void	ft_apply_noise(t_tdata *td, t_ldata *ld, t_object *o)
{
	register double					noise;
	static const t_noise_type		n[] = {

	{ &ft_noise_1 }, { &ft_noise_2 }, { &ft_noise_3 },
	{ &ft_noise_4 }, { &ft_noise_5 }, { &ft_noise_6 },
	{ &ft_noise_7 }, { &ft_noise_8 }, { &ft_noise_9 },
	{ &ft_noise_10 }, { &ft_noise_11 }, { &ft_noise_12 },
	{ &ft_noise_13 }, { &ft_noise_14 } };
	ld->cc = -1;
	noise = 1.0;
	while (++ld->cc < 3)
	{
		if (o->ns.color)
			noise = n[o->ns.type].f(&o->ns, &td->hp.x, &td->hp.y, &td->hp.z);
		if (noise < 0.0)
			noise = 0.0;
		ld->c[ld->cc] *= noise;
		ft_check_light(&ld->c[ld->cc]);
	}
}
