/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_tools.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/18 19:43:57 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/18 19:43:57 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <rt.h>

t_list		*ft_newlist(void)
{
	t_list		*new;

	new = NULL;
	if (!(new = (t_list *)malloc(sizeof(*new))))
		return (NULL);
	new->size = 0;
	new->begin = NULL;
	new->end = NULL;
	return (new);
}

t_list		*ft_list_push_back(t_list *list, t_object *o)
{
	t_elem		*new;

	if (list)
	{
		if (!(new = (t_elem *)malloc(sizeof(t_elem))))
			return (NULL);
		new->o = o;
		new->next = NULL;
		if (list->end == NULL)
		{
			new->prev = NULL;
			list->begin = new;
			list->end = new;
		}
		else
		{
			list->end->next = new;
			new->prev = list->end;
			list->end = new;
		}
		list->size++;
	}
	return (list);
}

void		ft_list_clear(t_list **list)
{
	t_elem		*tmp;
	t_elem		*del;

	if (*list)
	{
		tmp = (*list)->begin;
		while (tmp)
		{
			del = tmp;
			tmp = tmp->next;
			free(del);
		}
		free(*list);
		*list = NULL;
	}
}
