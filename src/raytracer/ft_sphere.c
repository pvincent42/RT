/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sphere.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjeannin <hjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/14 07:17:36 by hjeannin          #+#    #+#             */
/*   Updated: 2014/03/26 12:40:50 by pvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>
#include <math.h>

inline static void		ft_set_vec_zero(t_cd *v)
{
	v->x = 0;
	v->y = 0;
	v->z = 0;
}

inline static double	ft_opti_dist(const t_cd *cs, const double *tmp)
{
	const double		dist1 = (cs->y + *tmp) / cs->x;
	const double		dist2 = (cs->y - *tmp) / cs->x;

	if (dist1 <= dist2 && dist1 > 0.0)
		return (dist1);
	if (dist1 > dist2 && dist2 > 0.0)
		return (dist2);
	return (-1);
}

inline static void		ft_calc_sphere(const t_cd *p, const double *r2,
										const t_ray *r, t_cd *cs)
{
	cs->x = r->nv.x * r->nv.x + r->nv.y * r->nv.y + r->nv.z * r->nv.z;
	cs->y = 2 * (r->nv.x * (r->s.x - p->x) + r->nv.y
				* (r->s.y - p->y) + r->nv.z
				* (r->s.z - p->z));
	cs->z = ((r->s.x - p->x) * (r->s.x - p->x)
			+ (r->s.y - p->y) * (r->s.y - p->y)
			+ (r->s.z - p->z) * (r->s.z - p->z) - *r2);
}

double					ft_sphere(const t_object *o, t_tdata *td,
									const t_scene *s, t_ray *r)
{
	t_cd			cs;
	double			tmp;

	(void)td;
	(void)s;
	ft_set_vec_zero(&cs);
	ft_calc_sphere(&o->p, &o->r2, r, &cs);
	tmp = cs.y * cs.y - (4 * cs.x * cs.z);
	if (tmp < 0.0)
		return (-1);
	cs.y = -cs.y;
	tmp = sqrt(tmp);
	cs.x += cs.x;
	return (ft_opti_dist(&cs, &tmp));
}
