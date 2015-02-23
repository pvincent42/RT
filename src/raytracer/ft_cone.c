/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cone.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjeannin <hjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/14 07:07:45 by hjeannin          #+#    #+#             */
/*   Updated: 2014/03/25 12:10:20 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <rt.h>

inline static void		ft_cone_calc(t_cd *cc, const t_object *o,
									const t_scene *s, t_ray *r)
{
	t_cd				c;
	double				angle;

	angle = 30 * M_PI / 180;
	angle = 1 / (tan(angle) * tan(angle));
	c = s->cam->p;
	cc->x = pow(r->nv.x, 2)
		* angle + pow(r->nv.z, 2)
		* angle - pow(r->nv.y, 2);
	cc->y = 2 * (r->nv.x * (c.x - o->p.x) * angle)
		+ 2 * (r->nv.z * (c.z - o->p.z) * angle)
		- 2 * (r->nv.y * (c.y - o->p.y));
	cc->z = pow(c.x - o->p.x, 2) * angle
		+ pow(c.z - o->p.z, 2) * angle
		- pow(c.y - o->p.y, 2);
}

double					ft_cone(const t_object *o, t_tdata *td,
								const t_scene *s, t_ray *r)
{
	double				tmp;
	double				dist1;
	double				dist2;
	t_cd				cc;

	(void)td;
	ft_cone_calc(&cc, o, s, r);
	tmp = pow(cc.y, 2) - (4 * cc.x * cc.z);
	if (tmp < 0)
		return (-1);
	dist1 = (-cc.y + sqrt(tmp)) / (2 * cc.x);
	dist2 = (-cc.y - sqrt(tmp)) / (2 * cc.x);
	if (dist1 <= dist2)
		return (dist1);
	else
		return (dist2);
	return (-1);
}
