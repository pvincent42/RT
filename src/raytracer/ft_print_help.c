/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_help.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/27 22:16:24 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/27 22:16:44 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void					ft_print_help(void)
{
	ft_putendl_fd("\033[31;1m--------------------"
	"\033[31m HELP\033[0m \033[31;1m--------------------\033[0m", 2);
	ft_putendl_fd("\033[32m\033[31;1m|\033[0m ./rt \033[35m-i\033[32m ""scenes/"
	"*.sc :"
	" \033[33;1minteractive mode     \033[31m|\033[0m\033[0m", 2);
	ft_putendl_fd("\033[32m\033[31;1m|\033[0m ./rt \033[35m-g1\033[32m new.sc :"
	" \033[33;1mgenerate material grid   \033[31m|\033[0m\033[0m", 2);
	ft_putendl_fd("\033[32m\033[31;1m|\033[0m ./rt \033[35m-g2\033[32m new.sc :"
	" \033[33;1mgenerate spheres field   \033[31m|\033[0m\033[0m", 2);
}