/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gcd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/04 10:16:43 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/20 13:52:49 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_gcd(int a, int b)
{
	int			c;

	while (a != 0)
	{
		c = a;
		a = b % a;
		b = c;
	}
	return ((b = !b ? 1 : b));
}
