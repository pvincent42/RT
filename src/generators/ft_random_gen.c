/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_random_gen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/05 10:39:20 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/22 17:35:39 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <generators.h>

t_gen			ft_random_gen(void)
{
	t_gen		g;

	g.c[0] = ft_rand(20, 255);
	g.c[1] = ft_rand(20, 255);
	g.c[2] = ft_rand(20, 255);
	g.kf[0] = ft_rand(30, 100);
	g.kf[1] = ft_rand(30, 100);
	g.kf[2] = ft_rand(30, 100);
	g.kf[3] = ft_rand(1, 1000);
	g.ns[0] = ft_rand(1, 5);
	g.ns[1] = ft_rand(1, 6);
	g.ns[2] = ft_rand(1, 10);
	g.ns[3] = ft_rand(1, 1200);
	g.ns[4] = ft_rand(1, 20);
	return (g);
}
