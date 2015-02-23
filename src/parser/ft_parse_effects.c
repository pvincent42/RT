/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_effects.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/24 22:31:04 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/24 22:47:37 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <parser.h>
#include <libft.h>

void			ft_parse_effects(char *l, t_scene *s)
{
	s->effect = NO_EFFECT;
	if (ft_strinstr(l, "negative"))
		s->effect = NEGATIVE;
	if (ft_strinstr(l, "sepia"))
		s->effect = SEPIA;
}
