/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_ray.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjeannin <hjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:26:29 by hjeannin          #+#    #+#             */
/*   Updated: 2014/03/25 14:23:56 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <rt.h>

inline static void		ft_op_get_n_vec(t_cd *v, t_cd *nv)
{
	const double		hypo = sqrt(v->x * v->x + v->y * v->y + v->z * v->z);

	nv->x = v->x / hypo;
	nv->y = v->y / hypo;
	nv->z = v->z / hypo;
}

void					ft_get_ray(t_ray *r, t_object *c, t_cd *point)
{
	r->d = *point;
	r->s = c->p;
	r->v.x = r->d.x - c->p.x;
	r->v.y = r->d.y - c->p.y;
	r->v.z = r->d.z - c->p.z;
	ft_op_get_n_vec(&r->v, &r->nv);
}

void					ft_inc_x(t_cd *p, t_cd incx)
{
	p->x += incx.x;
	p->y += incx.y;
	p->z += incx.z;
}

void					ft_inc_y(t_cd *p, t_cd incy)
{
	p->x += incy.x;
	p->y += incy.y;
	p->z += incy.z;
}

void					ft_set_x(t_cd *p, t_cd tlp, int y, t_cd incy)
{
	p->x = tlp.x + y * incy.x;
	p->y = tlp.y + y * incy.y;
	p->z = tlp.z + y * incy.z;
}
