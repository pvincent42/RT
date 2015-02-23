/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_scene_imgs.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/11 14:12:04 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/25 01:59:39 by hjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <parser.h>
#include <mlx.h>

void				ft_init_scene_imgs(t_scene *s, t_data *d)
{
	int				i;

	if (!(s->img = (t_image *)malloc(sizeof(t_image) * s->cams->size)))
		exit(ft_error("Could not allocate memory !"));
	i = -1;
	while (++i < s->cams->size)
	{
		if (s->aa_val > 0)
		{
			s->aa_val = s->aa_val % 16;
			s->aa_img.data = mlx_new_image(d->init,
											d->wx * s->aa_val,
											d->wy * s->aa_val);
			ft_get_image_data(&s->aa_img);
		}
		s->img[i].data = mlx_new_image(d->init, d->wx, d->wy);
		ft_get_image_data(&s->img[i]);
	}
}
