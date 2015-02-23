/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line_2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/18 22:30:30 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/26 12:16:05 by pvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <parser.h>

inline static t_line			*ft_line_new(void)
{
	t_line						*new;

	new = NULL;
	if (!(new = (t_line *)malloc(sizeof(t_line))))
		exit(ft_error("Could not allocate line !"));
	new->size = 0;
	new->begin = NULL;
	new->end = NULL;
	return (new);
}

inline static t_line			*ft_line_add(t_line *line, char c)
{
	t_char						*new;

	if (!line)
		return (NULL);
	if (!(new = (t_char *)malloc(sizeof(t_char))))
		exit(ft_error("Could not allocate char !"));
	new->c = c;
	new->next = NULL;
	if (line->end == NULL)
	{
		new->prev = NULL;
		line->begin = new;
		line->end = new;
	}
	else
	{
		line->end->next = new;
		new->prev = line->end;
		line->end = new;
	}
	line->size++;
	return (line);
}

inline static void				ft_line_clear(t_line **line)
{
	t_char						*tmp;
	t_char						*del;

	if (*line)
	{
		tmp = (*line)->begin;
		while (tmp)
		{
			del = tmp;
			tmp = tmp->next;
			free(del);
		}
		free(*line);
		*line = NULL;
	}
}

int								ft_get_next_line_2(const int fd, char **line)
{
	t_line		*tline;
	t_char		*tchar;
	char		buf;
	int			i;
	int			ret;

	tline = ft_line_new();
	while ((ret = read(fd, &buf, 1) > 0) && buf != '\n')
		ft_line_add(tline, buf);
	if (!(*line = (char *)malloc(sizeof(char) * (tline->size + 1))))
		return (-1);
	tchar = tline->begin;
	i = -1;
	while (tchar)
	{
		(*line)[++i] = tchar->c;
		tchar = tchar->next;
	}
	(*line)[tline->size] = '\0';
	ft_line_clear(&tline);
	if (!ret)
		return (0);
	return (1);
}
