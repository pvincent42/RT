/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_background.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:23:12 by rdavid            #+#    #+#             */
/*   Updated: 2014/02/22 16:23:12 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <parser.h>

void				ft_check_background(t_scene *s, char *line)
{
	int				i;

	if (!ft_strncmp(line, "BACKGROUND", 10))
	{
		i = 10;
		s->bg_color = ft_get_next_color(line, &i);
	}
}
