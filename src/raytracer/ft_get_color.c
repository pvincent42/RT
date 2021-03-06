/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_color.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjeannin <hjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/22 16:26:11 by hjeannin          #+#    #+#             */
/*   Updated: 2014/03/26 13:13:17 by pvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_get_color(double *r, double *g, double *b)
{
	return ((((int)(*r) & 0xff) << 16)
	| (((int)(*g) & 0xff) << 8)
	| ((int)(*b) & 0xff));
}
