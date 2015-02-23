/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_scene.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:23:29 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/25 01:48:51 by hjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <parser.h>
#include <libft.h>

void				ft_check_scene(t_scene *s, char *line)
{
	int				i;

	if (!ft_strncmp(line, "SCENE", 5))
	{
		i = 5;
		if (ft_strc(line, 'c'))
		{
			s->ac[0] = ft_get_next_number(line, &i) / 255.0;
			s->ac[1] = ft_get_next_number(line, &i) / 255.0;
			s->ac[2] = ft_get_next_number(line, &i) / 255.0;
		}
		if (!s->prm)
		{
			s->seed = ft_strinstr(line, "seed") ?
				ft_get_next_number(line, &i) : 42;
			s->prm = ft_generate_table(s->seed, 256);
		}
		ft_parse_effects(line, s);
		if (ft_strinstr(line, "AA"))
			s->aa_val = ft_get_next_number(line, &i);
	}
}
