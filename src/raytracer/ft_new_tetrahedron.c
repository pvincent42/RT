/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_tetrahedron.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjeannin <hjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/14 19:48:58 by hjeannin          #+#    #+#             */
/*   Updated: 2014/03/26 12:57:52 by pvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <rt.h>

t_object		*ft_new_tetrahedron(void)
{
	t_object	*tri;

	if (!(tri = (t_object *)malloc(sizeof(t_object))))
		return (NULL);
	tri->p = ft_set_vec(0, 0, 0);
	tri->q1 = ft_set_vec(0, 0, 0);
	tri->q2 = ft_set_vec(0, 0, 0);
	tri->q3 = ft_set_vec(0, 0, 0);
	tri->ta = ft_set_vec(0, 0, 0);
	tri->tb = ft_set_vec(0, 0, 0);
	tri->tc = ft_set_vec(0, 0, 0);
	tri->td = ft_set_vec(0, 0, 0);
	tri->n = ft_set_vec(0, 0, 0);
	tri->tn1 = ft_set_vec(0, 0, 0);
	tri->tn2 = ft_set_vec(0, 0, 0);
	tri->tn3 = ft_set_vec(0, 0, 0);
	tri->tn4 = ft_set_vec(0, 0, 0);
	tri->dc[0] = 0.0;
	tri->dc[1] = 0.0;
	tri->dc[2] = 0.0;
	tri->sc[0] = 1.0;
	tri->sc[1] = 1.0;
	tri->sc[2] = 1.0;
	return (tri);
}
