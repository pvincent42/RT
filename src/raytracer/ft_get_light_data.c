/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_light_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjeannin <hjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:26:23 by hjeannin          #+#    #+#             */
/*   Updated: 2014/03/26 19:38:30 by hjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <rt.h>
#include <noise.h>

inline static void		ft_op_abs(double *n)
{
	if (*n < 0.0)
	{
		*n = -(*n);
		return ;
	}
}

inline static void		ft_op_dot_vec(double *a, t_cd *v1, t_cd *v2)
{
	*a = v1->x * v2->x + v1->y * v2->y + v1->z * v2->z;
}

void					ft_get_light_data(t_tdata *td, t_ldata *ld,
										t_object *o, t_object *l)
{
	ft_get_surface_normal(&ld->n, td, o, &td->hp);
	ft_get_light_vector(&ld->l, l, &td->hp);
	ft_get_reflection_vector(&ld->r, &ld->n, &ld->l, 0);
	ft_get_view_vector(&ld->v, &td->s->cam->p, &td->hp);
	ld->cc = -1;
	ld->anl = ft_dot_vec(ld->n, ld->l);
	if (o->type == PLANE
		|| o->type == DISC
		|| o->type == TRIANGLE)
		ft_op_abs(&ld->anl);
}
