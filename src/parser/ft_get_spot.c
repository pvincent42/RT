/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_spot.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:26:21 by rdavid            #+#    #+#             */
/*   Updated: 2014/02/22 16:26:23 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <parser.h>
#include <libft.h>

int					ft_get_spot(t_scene *s, int fd, char *ln)
{
	char			*l;
	t_object		*o;
	int				i;

	if (!(o = ft_new_spot(ft_set_vec(0, 0, 0))))
		return (0);
	o->type = SPOT;
	l = NULL;
	i = 0;
	if (ft_parse_spot(ln, o, &i))
	{
		while (ft_get_next_line(fd, &l))
		{
			if (!ft_parse_spot(l, o, &i))
			{
				free(l);
				break ;
			}
			free(l);
		}
	}
	ft_list_push_back(s->spots, o);
	return (1);
}
