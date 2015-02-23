/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cylinder.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/01 00:07:46 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/26 12:38:11 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>
#include <math.h>

inline static double	ft_dpow2(const double *n)
{
	return ((*n) * (*n));
}

inline static double	ft_cylinder_a(const t_cd *ndot, const t_cd *n,
										const t_cd *r)
{
	const t_cd			powr = {

	ft_dpow2(&r->x),
	ft_dpow2(&r->y),
	ft_dpow2(&r->z) };
	return (ft_dpow2(&n->x) * (powr.y + powr.z)
	+ ft_dpow2(&n->y) * (powr.z + powr.x)
	+ ft_dpow2(&n->z) * (powr.x + powr.y)
	- 2 * (ndot->x * r->x * r->y + ndot->y
	* r->x * r->z + ndot->z * r->z * r->y));
}

inline static double	ft_cylinder_b(const t_object *o,
									const t_cd *r, t_cd c)
{
	const t_cd			rc = {

	r->x * (c.x -= o->p.x),
	r->y * (c.y -= o->p.y),
	r->z * (c.z -= o->p.z) };
	return (2 * (ft_dpow2(&o->n.x) * (rc.y + rc.z)
	+ ft_dpow2(&o->n.y) * (rc.z + rc.x)
	+ ft_dpow2(&o->n.z) * (rc.x + rc.y))
	- 2 * (o->ndot.x * (r->x * c.y + r->y * c.x)
	+ o->ndot.y * (r->x * c.z + r->z * c.x)
	+ o->ndot.z * (r->y * c.z + r->z * c.y)));
}

inline static double	ft_cylinder_c(const t_cd *p, const t_cd *n,
									const t_cd *ndot, t_cd c)
{
	c.x -= p->x;
	c.y -= p->y;
	c.z -= p->z;
	return (ft_dpow2(&n->x)
	* (ft_dpow2(&c.y) + ft_dpow2(&c.z))
	+ ft_dpow2(&n->y)
	* (ft_dpow2(&c.z) + ft_dpow2(&c.x))
	+ ft_dpow2(&n->z)
	* (ft_dpow2(&c.x) + ft_dpow2(&c.y))
	- 2 * (ndot->x * c.x * c.y
	+ ndot->y * c.x * c.z
	+ ndot->z * c.z * c.y));
}

double					ft_cylinder(const t_object *o, t_tdata *td,
									const t_scene *s, t_ray *r)
{
	double			dist1;
	double			dist2;
	double			tmp;
	const t_cd		calc = {

	ft_cylinder_a(&o->ndot, &o->n, &r->nv),
	ft_cylinder_b(o, &r->nv, r->s),
	ft_cylinder_c(&o->p, &o->n, &o->ndot, r->s) - o->r2 };
	(void)td;
	(void)s;
	tmp = ft_dpow2(&calc.y) - (4 * calc.x * calc.z);
	if (tmp < 0.0)
		return (-1);
	dist1 = (-calc.y + sqrt(tmp)) / (calc.x * 2);
	dist2 = (-calc.y - sqrt(tmp)) / (calc.x * 2);
	if (dist1 < dist2)
		return (dist1);
	if (dist1 > dist2 && dist2 > 0.0)
		return (dist2);
	return (-1);
}
