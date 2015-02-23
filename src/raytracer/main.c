/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjeannin <hjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:27:45 by hjeannin          #+#    #+#             */
/*   Updated: 2014/03/27 22:19:48 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <libft.h>
#include <rt.h>

int						main(int argc, char **argv)
{
	t_data				d;

	if (argc < 2)
	{
		ft_putendl_fd("\033[31;1mGimme scenes ! format: [*.sc]\033[0m", 2);
		ft_help();
		return (0);
	}
	if (argc > 50)
	{
		ft_putendl_fd("\033[31;1mToo many scenes !\033[0m", 2);
		return (0);
	}
	ft_parse_options(&d, argc, argv);
	ft_set_data(&d);
	if ((d.init = mlx_init()))
	{
		if ((d.win = mlx_new_window(d.init, WX, WY, TITLE)))
			ft_main_loop(argv, &d);
	}
	return (0);
}
