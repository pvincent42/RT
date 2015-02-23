/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ray_caster.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjeannin <hjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/25 17:09:06 by hjeannin          #+#    #+#             */
/*   Updated: 2014/03/24 00:55:22 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <rt.h>

inline static void		ft_join_threads(t_pool *pl, int *tn)
{
	int					i;

	i = -1;
	while (++i < *tn)
		pthread_join(pl->pth[i].init, NULL);
	free(pl->pth);
}

void					ft_ray_caster(t_scene *s)
{
	int					y;
	t_pool				pl;
	int					tn;
	int					tc;
	int					tl;

	tn = ft_gcd(s->sx, s->sy);
	pl = ft_create_pool(tn);
	tl = s->sy / tn;
	tc = -1;
	y = 0;
	while (++tc < tn)
	{
		pl.pth[tc].d.y = y;
		pl.pth[tc].d.xi = s->xi;
		pl.pth[tc].d.yi = s->yi;
		pl.pth[tc].d.tl = tl;
		pl.pth[tc].d.s = s;
		pl.pth[tc].d.wx = s->sx;
		pl.pth[tc].d.cam_num = s->cam_num;
		pthread_create(&pl.pth[tc].init, NULL, ft_run_thread, &pl.pth[tc].d);
		y += tl;
	}
	ft_join_threads(&pl, &tn);
}
