/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_tetrahedron.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjeannin <hjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/14 19:36:46 by hjeannin          #+#    #+#             */
/*   Updated: 2014/03/14 19:41:46 by hjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <parser.h>
#include <libft.h>

int					ft_get_tetrahedron(t_scene *s, int fd, char *ln)
{
	char			*l;
	t_object		*o;
	int				i;

	if (!(o = ft_new_tetrahedron()))
		return (0);
	o->type = TETRAHEDRON;
	l = NULL;
	i = 0;
	if (ft_parse_tetrahedron(ln, o, &i))
	{
		while (ft_get_next_line(fd, &l))
		{
			i = 0;
			if (!ft_parse_tetrahedron(l, o, &i))
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
