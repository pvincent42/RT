/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ray_tracer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/12 00:15:45 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/26 16:09:07 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

inline static void		ft_check_objects(const t_object *o, t_tdata *td,
										t_ray *r, double *t)
{
	static const t_object_type		equation[9] = {
		{ &ft_sphere },
		{ &ft_cylinder },
		{ &ft_plane },
		{ &ft_cone },
		{ &ft_disc },
		{ &ft_half_sphere },
		{ &ft_quadric },
		{ &ft_triangle },
		{ &ft_tetrahedron }
	};

	*t = equation[o->type].f(o, td, td->s, r);
}

static void				ft_init_params(t_ray_params *params, t_tdata *td)
{
	params->ow = td->s->objs->begin;
	params->o = NULL;
	params->t = 0.0;
	td->cdist = 2147483647.0;
}

int						ft_ray_tracer(t_tdata *td, t_ray *r, double d, int c)
{
	t_ray_params		p;

	ft_init_params(&p, td);
	while (p.ow)
	{
		ft_check_objects(p.ow->o, td, r, &p.t);
		if (p.t != -1.0 && p.t < td->cdist
			&& ((c == 0) || (c > 0 && c != SHADOW && td->no_check != p.ow->o)))
		{
			td->cdist = p.t;
			p.o = p.ow->o;
		}
		if (p.t != -1.0 && c == SHADOW && p.t < d && td->no_check != p.ow->o)
		{
			td->cdist = p.t;
			break ;
		}
		p.ow = p.ow->next;
	}
	if (c != SHADOW && td->cdist != 2147483647.0)
		return (ft_set_light(td, p.o, r, c));
	if (c == SHADOW && td->cdist < d)
		return (-1);
	return (td->s->bg_color);
}
