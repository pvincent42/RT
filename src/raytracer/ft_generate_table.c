/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generate_table.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/18 21:47:21 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/18 21:53:40 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <rt.h>

int						*ft_generate_table(const int seed, const int size)
{
	int					*prm;
	int					i;
	int					swap_i;
	int					tmp;
	const int			total = size * 2;

	srandom(seed);
	if (!(prm = (int *)malloc(sizeof(int) * total)))
		exit(ft_error("Could not allocate permutation table !"));
	i = -1;
	while (++i < size)
		prm[i] = i;
	i = -1;
	while (++i < size)
	{
		swap_i = random() % size;
		tmp = prm[swap_i];
		prm[swap_i] = prm[i];
		prm[i] = tmp;
	}
	i = size - 1;
	while (++i < total)
		prm[i] = prm[i - size];
	return (prm);
}
