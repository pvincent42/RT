/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_grid_obj.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/05 19:44:42 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/12 21:33:52 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <generators.h>

void			ft_set_grid_obj(t_grid_obj *sphere)
{
	sphere->r = 50;
	sphere->x = -1;
	sphere->y = -1;
	sphere->z = -1;
}
