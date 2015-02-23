/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_light.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/15 16:28:22 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/26 12:35:56 by pvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <rt.h>

inline static double		ft_dpow2(double n)
{
	return (n * n);
}

inline static double		ft_op_dist(t_cd *p1, t_cd *p2)
{
	return (sqrt(ft_dpow2(p1->x - p2->x)
	+ ft_dpow2(p1->y - p2->y)
	+ ft_dpow2(p1->z - p2->z)));
}

inline static double		ft_op_dot_pow(t_cd *v1, t_cd *v2, double *shine)
{
	t_pow_op				u;
	int						e;
	double					r;
	double					a;

	a = v1->x * v2->x + v1->y * v2->y + v1->z * v2->z;
	e = (int)(*shine);
	r = 1.0;
	u.d = a;
	u.x[1] = (int)((*shine - e) * (u.x[1] - 1072632447) + 1072632447);
	u.x[0] = 0;
	while (e)
	{
		if (e & 1)
			r *= a;
		a *= a;
		e >>= 1;
	}
	return (r * u.d);
}

inline static double		ft_lambert_phong(t_ldata *d, t_object *o)
{
	return ((d->at * (o->kd * d->anl + o->ks
	* ft_op_dot_pow(&d->r, &d->v, &o->shine))));
}

void						ft_apply_light(t_tdata *td, t_ldata *ld,
											t_object *l, t_object *o)
{
	const double				at_dist = ft_op_dist(&td->hp, &l->p);
	static const double			k = 0.00000025;

	td->no_check = o;
	if (!ft_apply_shadow(td, l, at_dist))
	{
		ld->at = 1.0 / (k + k * at_dist + k * at_dist * at_dist);
		ld->at = ld->at > 1.0 ? 1.0 : ld->at;
		ft_get_light_data(td, ld, o, l);
		ld->cc = -1;
		while (++ld->cc < 3)
		{
			ld->c[ld->cc] += o->dc[ld->cc] * o->sc[ld->cc]
				* l->lc[ld->cc]
				* ft_lambert_phong(ld, o);
		}
	}
}
