/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generators.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/12 21:28:52 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/26 11:24:19 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GENERATORS_H
# define GENERATORS_H

# include <rt.h>

# define LIMIT_Z_MIN	-3000
# define LIMIT_Z_MAX	3000
# define LIMIT_R_MAX	150
# define LIMIT_R_MIN	20
# define LIMIT_Y		2080
# define LIMIT_X		3000
# define MIN_SPACE		10

typedef struct		s_gen
{
	int				kf[4];
	int				ns[6];
	int				c[3];
}					t_gen;

typedef struct		s_grid
{
	t_ci			cur;
	int				e;
	int				inc;
	int				id;
	t_ci			i;
	t_ci			j;
	t_ci			k;
}					t_grid;

typedef struct		s_grid_obj
{
	int				x;
	int				y;
	int				z;
	int				r;
}					t_grid_obj;

typedef struct		s_sphere
{
	t_ci			c;
	double			r;
	t_gen			g;
}					t_sphere;

typedef struct		s_curve
{
	t_cd			p0;
	t_cd			p1;
	t_cd			p2;
	t_cd			p3;
}					t_curve;

void				ft_print_scene_basics(int fd);
void				ft_print_sphere_field_scene_basics(int fd);
t_ci				ft_set_ivec(int x, int y, int z);
t_gen				ft_random_gen(void);
int					ft_print_sphere_position(int fd, t_ci cur);
int					ft_print_sphere_radius(int fd, int r);
int					ft_print_sphere_color(int fd, t_gen gen);
int					ft_print_sphere_light_coefficients(int fd, t_gen gen);
int					ft_print_sphere_noise_coefficients(int fd, t_gen gen);
int					ft_print_sphere_random_noise(int fd);
int					ft_print_sphere_endline(int fd);
int					ft_print_sphere_normal(int fd);
int					ft_print_sphere(int fd, t_ci cur, t_gen gen, int r);
int					ft_generate_material_grid(char **files);
int					ft_generate_sphere_field(char **files);
int					ft_print_sphere_random_normal_noise(int fd);
void				ft_set_grid(t_grid *grid, t_grid_obj *sphere);
void				ft_set_grid_obj(t_grid_obj *sphere);
void				ft_generate_y_layer(t_grid_obj *obj, t_grid *grid, int fd);
void				ft_print_camera_curve(int fd, t_curve c, int precision);
int					ft_sphere_overlap(t_sphere *s, int max, int n);
int					ft_int_dist(t_ci p1, t_ci p2);

#endif
