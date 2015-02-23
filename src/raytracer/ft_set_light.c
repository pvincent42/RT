/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_light.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/13 20:45:49 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/25 14:32:09 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <stdlib.h>
#include <rt.h>
#include <noise.h>
#include <libft.h>

inline static void		ft_assign_light_colors(int *c, t_tdata *td, t_ldata *ld)
{
	if (*c == 0)
	{
		td->fc[0] = ld->c[0];
		td->fc[1] = ld->c[1];
		td->fc[2] = ld->c[2];
	}
	if (*c > 0)
	{
		td->rc[0] = ld->c[0];
		td->rc[1] = ld->c[1];
		td->rc[2] = ld->c[2];
	}
}

inline static void		ft_op_get_hp(t_cd *hp, t_cd *cam,
									const double *dist, const t_cd *r)
{
	hp->x = cam->x + *dist * r->x;
	hp->y = cam->y + *dist * r->y;
	hp->z = cam->z + *dist * r->z;
}

int						ft_set_light(t_tdata *td, t_object *o,
									t_ray *r, int c)
{
	t_elem			*lw;
	t_ldata			d;

	if (c == 0)
		ft_op_get_hp(&td->hp, &td->s->cam->p, &td->cdist, &r->nv);
	else
		ft_op_get_hp(&td->hp, &td->hp, &td->cdist, &r->nv);
	ft_apply_ambient(&d, o);
	lw = td->s->spots->begin;
	while (lw)
	{
		ft_apply_light(td, &d, lw->o, o);
		lw = lw->next;
	}
	ft_apply_noise(td, &d, o);
	d.cc = -1;
	while (++d.cc < 3)
		ft_check_light(&d.c[d.cc]);
	ft_assign_light_colors(&c, td, &d);
	if (c < 1 && o->kt > 0.0)
		ft_apply_refraction(o, td, r);
	if (c < 1 && o->krl > 0.0)
		ft_apply_reflection(o, &d, td, c);
	return (-1);
}
