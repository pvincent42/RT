/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_disc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjeannin <hjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:25:28 by hjeannin          #+#    #+#             */
/*   Updated: 2014/03/25 12:07:09 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

inline static void		ft_op_get_hitpoint(t_cd *hp, const t_cd *cam,
										const double *dist, const t_cd *ray)
{
	hp->x = cam->x + *dist * ray->x;
	hp->y = cam->y + *dist * ray->y;
	hp->z = cam->z + *dist * ray->z;
}

inline static void		ft_op_sub_dot_vec(double *d, t_cd *v1,
										const t_cd *v2)
{
	v1->x = v1->x - v2->x;
	v1->y = v1->y - v2->y;
	v1->z = v1->z - v2->z;
	*d = v1->x * v1->x + v1->y * v1->y + v1->z * v1->z;
}

double					ft_disc(const t_object *o, t_tdata *td,
								const t_scene *s, t_ray *r)
{
	const double		dist = ft_plane(o, td, s, r);
	t_cd				hitpoint;
	double				disc;

	ft_op_get_hitpoint(&hitpoint, &r->s, &dist, &r->nv);
	ft_op_sub_dot_vec(&disc, &hitpoint, &o->p);
	if (disc <= o->r2)
		return (dist);
	return (-1);
}
