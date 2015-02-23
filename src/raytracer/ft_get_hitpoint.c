/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_hitpoint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjeannin <hjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:26:17 by hjeannin          #+#    #+#             */
/*   Updated: 2014/03/24 06:04:25 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

t_cd			ft_get_hitpoint(t_cd *cam, double dist, t_cd *ray)
{
	t_cd		hitpoint;

	hitpoint.x = cam->x + dist * ray->x;
	hitpoint.y = cam->y + dist * ray->y;
	hitpoint.z = cam->z + dist * ray->z;
	return (hitpoint);
}
