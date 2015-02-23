/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_half_sphere.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:25:17 by rdavid            #+#    #+#             */
/*   Updated: 2014/02/22 16:25:17 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <parser.h>
#include <libft.h>

int					ft_get_half_sphere(t_scene *s, int fd, char *ln)
{
	char			*l;
	t_object		*o;
	int				i;

	if (!(o = ft_new_half_sphere(ft_set_vec(0, 0, 0), ft_set_vec(0, 0, 0), 0)))
		return (0);
	o->type = HALF_S;
	l = NULL;
	i = 0;
	if (ft_parse_half_sphere(ln, o, &i))
	{
		while (ft_get_next_line(fd, &l))
		{
			if (!ft_parse_half_sphere(l, o, &i))
			{
				free(l);
				break ;
			}
			free(l);
		}
	}
	ft_list_push_back(s->objs, o);
	return (1);
}
