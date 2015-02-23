/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dist.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjeannin <hjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:25:45 by hjeannin          #+#    #+#             */
/*   Updated: 2014/03/25 11:38:51 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <rt.h>

double			ft_dist(t_cd p1, t_cd p2)
{
	double		dist;

	dist = sqrt(pow(p1.x - p2.x, 2)
				+ pow(p1.y - p2.y, 2)
				+ pow(p1.z - p2.z, 2));
	return (dist);
}
