/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_quadric.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/28 23:14:58 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/01 01:20:43 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <parser.h>
#include <libft.h>

int					ft_get_quadric(t_scene *s, int fd, char *ln)
{
	char			*l;
	t_object		*o;
	int				i;

	if (!(o = ft_new_quadric(ft_set_vec(0, 0, 0), ft_set_vec(0, 0, 0), 0)))
		return (0);
	o->type = QUADRIC;
	l = NULL;
	i = 0;
	if (ft_parse_quadric(ln, o, &i))
	{
		while (ft_get_next_line(fd, &l))
		{
			if (!ft_parse_quadric(l, o, &i))
			{
				free(l);
				break ;
			}
		}
	}
	ft_get_ambiant_color(s, o);
	ft_list_push_back(s->objs, o);
	return (fd);
}
