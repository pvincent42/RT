/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_scene.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:27:21 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/27 19:54:21 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <rt.h>

void				ft_init_scene(t_scene *s, char *name)
{
	s->objs = ft_newlist();
	s->spots = ft_newlist();
	s->cams = ft_newlist();
	s->bg_color = 0;
	s->dcs = 0;
	s->mini_img.p_data = NULL;
	s->prm = NULL;
	s->mini_img_done = 0;
	s->current_cam = 0;
	s->ac[0] = 0.1;
	s->ac[1] = 0.1;
	s->ac[2] = 0.1;
	s->name = name;
	s->effect = NO_EFFECT;
	s->aa_val = 0;
	s->record_file_created = 0;
}
