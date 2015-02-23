/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sphere_overlap.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/22 15:33:07 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/22 15:33:45 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <generators.h>

int					ft_sphere_overlap(t_sphere *s, int max, int n)
{
	int				i;
	t_sphere		s1;
	double			dist;

	s1 = s[n];
	i = -1;
	while (++i < max)
	{
		if (i != n)
		{
			dist = ft_int_dist(s1.c, s[i].c);
			if (dist < s1.r + s[i].r)
				return (1);
		}
	}
	return (0);
}
