/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_triangle.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/05 11:04:31 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/05 11:15:52 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <parser.h>
#include <libft.h>

int					ft_get_triangle(t_scene *s, int fd, char *ln)
{
	char			*l;
	t_object		*o;
	int				i;

	if (!(o = ft_new_triangle()))
		return (0);
	o->type = TRIANGLE;
	l = NULL;
	i = 0;
	if (ft_parse_triangle(ln, o, &i))
	{
		while (ft_get_next_line(fd, &l))
		{
			i = 0;
			if (!ft_parse_triangle(l, o, &i))
			{
				free(l);
				break ;
			}
			free(l);
		}
	}
	ft_get_ambiant_color(s, o);
	ft_list_push_back(s->objs, o);
	return (1);
}
