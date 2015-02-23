/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_grid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/05 19:40:29 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/12 21:33:40 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <generators.h>

void			ft_set_grid(t_grid *grid, t_grid_obj *sphere)
{
	grid->inc = 4;
	grid->e = 50;
	grid->cur = ft_set_ivec(0, 0, 0);
	grid->i = ft_set_ivec(sphere->r * 2 + grid->e, 0, 0);
	grid->j = ft_set_ivec(0, sphere->r * 2 + grid->e, 0);
	grid->k = ft_set_ivec(0, 0, sphere->r * 2 + grid->e);
}
