/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/14 07:04:40 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/26 11:00:28 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H

# include <rt.h>

typedef struct			s_char
{
	char				c;
	struct s_char		*next;
	struct s_char		*prev;
}						t_char;

typedef struct			s_line
{
	int					size;
	t_char				*begin;
	t_char				*end;
}						t_line;

typedef struct			s_file
{
	int					fd;
	char				*name;
}						t_file;

int						ft_cylinder_object(char *str, int i);
int						ft_get_cylinder(t_scene *s, int fd, char *ln);
int						ft_parse_cylinder(char *l, t_object *o, int *i);
int						ft_sphere_object(char *str, int i);
int						ft_get_sphere(t_scene *s, int fd, char *ln);
int						ft_parse_sphere(char *l, t_object *o, int *i);
int						ft_plane_object(char *str, int i);
int						ft_get_plane(t_scene *s, int fd, char *ln);
int						ft_parse_plane(char *l, t_object *o, int *i);
int						ft_cone_object(char *str, int i);
int						ft_get_cone(t_scene *s, int fd, char *ln);
int						ft_parse_cone(char *l, t_object *o, int *i);
int						ft_disc_object(char *str, int i);
int						ft_get_disc(t_scene *s, int fd, char *ln);
int						ft_parse_disc(char *l, t_object *o, int *i);
int						ft_half_sphere_object(char *str, int i);
int						ft_get_half_sphere(t_scene *s, int fd, char *ln);
int						ft_parse_half_sphere(char *l, t_object *o, int *i);
int						ft_quadric_object(char *str, int i);
int						ft_get_quadric(t_scene *s, int fd, char *ln);
int						ft_parse_quadric(char *l, t_object *o, int *i);
int						ft_triangle_object(char *str, int i);
int						ft_get_triangle(t_scene *s, int fd, char *ln);
int						ft_parse_triangle(char *l, t_object *o, int *i);
int						ft_tetrahedron_object(char *str, int i);
int						ft_get_tetrahedron(t_scene *s, int fd, char *ln);
int						ft_parse_tetrahedron(char *l, t_object *o, int *i);
int						ft_get_spot(t_scene *s, int fd, char *ln);
int						ft_parse_spot(char *l, t_object *o, int *i);
void					ft_check_camera(t_scene *s, char *line, t_data *d);
void					ft_get_cam_viewplane(t_object *cam, t_scene *s,
											int wx, int wy);
void					ft_get_viewplane_top_left_point(t_object *cam,
														t_scene *s);
void					ft_get_viewplane_top_right_point(t_object *cam,
														t_scene *s);
void					ft_get_viewplane_bottom_left_point(t_object *cam,
														t_scene *s);
void					ft_get_object(t_scene *s, int fd, int type, char *line);
int						ft_get_object_type(char *str, int i);
void					ft_get_ambiant_color(t_scene *s, t_object *o);
int						ft_get_all_scenes(char **argv, t_data *d);
void					ft_init_scene(t_scene *s, char *name);
void					ft_init_scene_imgs(t_scene *s, t_data *d);
t_scene					*ft_read_scene(t_data *d, int fd, char *name);
void					ft_check_scene(t_scene *s, char *line);
void					ft_parse_effects(char *l, t_scene *s);
void					ft_check_background(t_scene *s, char *line);
void					ft_assign_noise_tables(t_scene *s);
void					ft_parse_noise(char *l, t_object *o, int *i);
void					ft_close_files(t_file *files, int len);
int						ft_get_next_color(char *str, int *i);
double					ft_get_next_number(char *str, int *i);
int						ft_get_valid_file_number(char **argv);
t_file					*ft_get_valid_files(char **argv, int *len);
int						ft_valid_name(char *n);
int						ft_strc(char *str, char c);
t_cd					ft_get_next_point(char *line, int *i);
int						ft_strinstr(char *str1, char *str2);
void					ft_parse_coefficients(char *l, t_object *o, int *i);
int						ft_get_next_line_2(const int fd, char **line);

#endif
