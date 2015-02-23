/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_plane.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjeannin <hjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:26:52 by hjeannin          #+#    #+#             */
/*   Updated: 2014/03/25 14:41:31 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

inline static double	ft_opti_dot_vec(const t_cd *v1, const t_cd *v2)
{
	return (v1->x * v2->x + v1->y * v2->y + v1->z * v2->z);
}

inline static double	ft_opti_dist(double dc, const double *on,
									const double *dn)
{
	if ((dc = (dc - *on) / *dn) > 0.0)
		return (dc);
	return (-1);
}

double					ft_plane(const t_object *o, t_tdata *td,
								const t_scene *s, t_ray *r)
{
	const double	on = ft_opti_dot_vec(&r->s, &o->n);
	const double	dn = ft_opti_dot_vec(&r->nv, &o->n);

	(void)td;
	(void)s;
	if (dn == 0.0 || on == 0.0)
		return (-1);
	return (ft_opti_dist(ft_opti_dot_vec(&o->p, &o->n), &on, &dn));
}
