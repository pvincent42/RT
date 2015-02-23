/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_point.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:25:40 by rdavid            #+#    #+#             */
/*   Updated: 2014/02/22 16:25:40 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <parser.h>

t_cd			ft_get_next_point(char *line, int *i)
{
	t_cd		p;

	p.x = ft_get_next_number(line, i);
	p.y = ft_get_next_number(line, i);
	p.z = ft_get_next_number(line, i);
	return (p);
}
