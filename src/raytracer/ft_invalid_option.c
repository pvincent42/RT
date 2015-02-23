/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_invalid_option.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/26 20:07:51 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/26 20:08:07 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int					ft_invalid_option(char *option)
{
	ft_putstr_fd("\033[31;1mInvalid option: ", 2);
	ft_putendl_fd(option, 2);
	ft_putstr_fd("\033[0m", 2);
	return (-42);
}
