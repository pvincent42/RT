/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_options.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/26 19:47:54 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/26 19:58:20 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <rt.h>
#include <libft.h>

void					ft_parse_options(t_data *d, int argc, char **argv)
{
	int					i;
	int					opt[2];

	opt[0] = 0;
	opt[1] = 0;
	if (argc >= 2)
	{
		i = 0;
		while (++i < argc)
		{
			if (argv[i][0] == '-')
			{
				if (!ft_strncmp(argv[i], "-g1", 3))
					opt[1] = 1;
				else if (!ft_strncmp(argv[i], "-g2", 3))
					opt[1] = 2;
				else if (!ft_strncmp(argv[i], "-i", 2))
					opt[0] = 1;
				else
					exit(ft_invalid_option(argv[i]));
			}
		}
	}
	ft_compute_options(d, opt, argv);
}
