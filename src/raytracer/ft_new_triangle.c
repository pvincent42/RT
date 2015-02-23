/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_triangle.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjeannin <hjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/03 22:35:12 by hjeannin          #+#    #+#             */
/*   Updated: 2014/03/26 12:48:36 by pvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <rt.h>

t_object		*ft_new_triangle(void)
{
	t_object	*tri;

	if (!(tri = (t_object *)malloc(sizeof(t_object))))
		return (NULL);
	tri->p = ft_set_vec(0, 0, 0);
	tri->q1 = ft_set_vec(0, 0, 0);
	tri->q2 = ft_set_vec(0, 0, 0);
	tri->q3 = ft_set_vec(0, 0, 0);
	tri->n = ft_set_vec(0, 0, 0);
	tri->dc[0] = 0.0;
	tri->dc[1] = 0.0;
	tri->dc[2] = 0.0;
	tri->sc[0] = 1.0;
	tri->sc[1] = 1.0;
	tri->sc[2] = 1.0;
	return (tri);
}
