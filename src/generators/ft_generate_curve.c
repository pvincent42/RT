/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generate_curve.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/12 21:34:07 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/26 12:26:17 by pvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <generators.h>
#include <libft.h>

inline static t_cd		ft_calculate_curve_point(double t1, t_curve c)
{
	t_cd				u;
	t_cd				t;
	t_cd				p;

	u.x = 1 - t1;
	u.y = u.x * u.x;
	u.z = u.y * u.x;
	t.x = t1;
	t.y = t.x * t.x;
	t.z = t.y * t.x;
	p = ft_set_vec(c.p0.x * u.z, c.p0.y * u.z, c.p0.z * u.z);
	p = ft_set_vec(p.x + (3 * u.y * t.x * c.p1.x),
					p.y + (3 * u.y * t.x * c.p1.y),
					p.z + (3 * u.y * t.x * c.p1.z));
	p = ft_set_vec(p.x + (3 * u.x * t.y * c.p2.x),
					p.y + (3 * u.x * t.y * c.p2.y),
					p.z + (3 * u.x * t.y * c.p2.z));
	p = ft_set_vec(p.x + (t.z * c.p3.x),
					p.y + (t.z * c.p3.y),
					p.z + (t.z * c.p3.z));
	return (p);
}

inline static void		ft_print_curve_camera_normal(int fd, t_cd *p,
													t_cd *pivot)
{
	t_cd			n;

	n = ft_get_vector(p, pivot);
	ft_putstr_fd(" n ", fd);
	ft_putnbr_fd((int)n.x, fd);
	ft_putchar_fd(' ', fd);
	ft_putnbr_fd((int)n.y, fd);
	ft_putchar_fd(' ', fd);
	ft_putnbr_fd((int)n.z, fd);
}

inline static void		ft_print_curve_camera_position(int fd, t_cd *p)
{
	ft_putstr_fd("CAMERA { p ", fd);
	ft_putnbr_fd((int)p->x, fd);
	ft_putchar_fd(' ', fd);
	ft_putnbr_fd((int)p->y, fd);
	ft_putchar_fd(' ', fd);
	ft_putnbr_fd((int)p->z, fd);
}

void					ft_print_camera_curve(int fd, t_curve c, int precision)
{
	int				i;
	t_cd			u;
	double			t;
	t_cd			pivot;
	t_cd			p;

	u = ft_set_vec(0, 100, 0);
	t = 0;
	i = 0;
	pivot = ft_set_vec(3000 / 2, 2080 - (150 * 3), 0);
	while (i < precision)
	{
		t = i / (double)precision;
		p = ft_calculate_curve_point(t, c);
		ft_print_curve_camera_position(fd, &p);
		ft_print_curve_camera_normal(fd, &p, &pivot);
		ft_putstr_fd(" u ", fd);
		ft_putnbr_fd((int)u.x, fd);
		ft_putchar_fd(' ', fd);
		ft_putnbr_fd((int)u.y, fd);
		ft_putchar_fd(' ', fd);
		ft_putnbr_fd((int)u.z, fd);
		ft_putendl_fd(" }", fd);
		i++;
	}
}
