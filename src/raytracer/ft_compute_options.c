/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compute_options.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/26 19:59:17 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/26 20:08:50 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>
#include <generators.h>

void				ft_compute_options(t_data *d, int opt[2], char **argv)
{
	if (opt[1] == 1)
		ft_generate_material_grid(argv);
	else if (opt[1] == 2)
		ft_generate_sphere_field(argv);
	if (opt[0] == 1)
		d->interactive = 1;
	else
		d->interactive = 0;
}
