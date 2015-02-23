/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_examples.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/27 22:17:47 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/27 22:18:12 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void					ft_print_examples(void)
{
	ft_putendl_fd("\033[31;1m|\033[31;1m----------------- EXAMPLES ---------"
	"--------|\033[0m", 2);
	ft_putendl_fd("\033[31;1m|\033[0m ./rt scenes/DOOM.sc scenes/palace.sc    "
	"   \033[31;1m|\033[0m", 2);
	ft_putendl_fd("\033[31;1m|\033[0m ./rt scenes/Interactive/*.sc -i         "
	"   \033[31;1m|\033[0m", 2);
	ft_putendl_fd("\033[31;1m|\033[0m ./rt -g1 scenes/new_material_grid.sc    "
	"   \033[31;1m|\033[0m", 2);
	ft_putendl_fd("\033[31;1m|\033[0m ./rt -g2 scenes/new_sphere_field.sc     "
	"   \033[31;1m|\033[0m", 2);
}
