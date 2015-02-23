/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_pool.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/18 22:07:22 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/18 22:08:35 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <rt.h>

t_pool			ft_create_pool(const int num)
{
	t_pool		pool;

	if (!(pool.pth = (t_thread *)malloc(sizeof(t_thread) * num)))
		exit(ft_error("Could not allocate thread !"));
	return (pool);
}
