/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rt_prototypes.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/26 10:44:46 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/27 22:17:24 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RT_PROTOS_H
# define RT_PROTOS_H

int			ft_set_data(t_data *d);
void		ft_main_loop(char **argv, t_data *d);
void		ft_parse_options(t_data *d, int argc, char **argv);
void		ft_compute_options(t_data *d, int opt[2], char **argv);
int			ft_invalid_option(char *option);
void		*ft_run_scenes(void *d);
void		*ft_run_miniscenes(void *d);
t_pool		ft_create_pool(const int num);
void		*ft_run_thread(void *td);
void		ft_ray_caster(t_scene *s);
int			ft_ray_tracer(t_tdata *td, t_ray *r, double d, int c);
int			ft_set_light(t_tdata *td, t_object *o, t_ray *r, int c);
void		ft_put_pixel(t_image *img, int x, int y, int cl);
t_cd		ft_set_vec(register const double x,
						register const double y,
						register const double z);
t_cd		ft_add_vec(register const t_cd vec1, register const t_cd vec2);
t_cd		ft_sub_vec(register const t_cd vec1, register const t_cd vec2);
t_cd		ft_mul_vec(register const t_cd vec1, register const t_cd vec2);
t_cd		ft_div_vec(register const t_cd vec1, register const t_cd vec2);
t_cd		ft_cross_vec(register const t_cd v1, register const t_cd v2);
t_cd		ft_rev_vec(register const t_cd vec);
double		ft_dot_vec(register const t_cd v1, register const t_cd v2);
t_cd		ft_uni_vec(register const t_cd v);
t_cd		ft_abs_vec(register t_cd v);
double		ft_abs(double n);
t_list		*ft_newlist(void);
t_list		*ft_list_push_back(t_list *list, t_object *o);
void		ft_list_clear(t_list **list);
void		ft_printlist(t_list *list);
t_object	*ft_new_sphere(t_cd p, t_cd n, double r);
t_object	*ft_new_half_sphere(t_cd p, t_cd n, double r);
t_object	*ft_new_plane(t_cd p, t_cd n);
t_object	*ft_new_cylinder(t_cd p, t_cd n, double r);
t_object	*ft_new_cone(t_cd p, t_cd n);
t_object	*ft_new_spot(t_cd p);
t_object	*ft_new_disc(t_cd p, t_cd n, double r);
t_object	*ft_new_quadric(t_cd p, t_cd n, double r);
t_object	*ft_new_triangle(void);
t_object	*ft_new_tetrahedron(void);
double		ft_sphere(const t_object *o, t_tdata *td,
						const t_scene *s, t_ray *r);
double		ft_cylinder(const t_object *o, t_tdata *td,
						const t_scene *s, t_ray *r);
double		ft_plane(const t_object *o, t_tdata *td,
						const t_scene *s, t_ray *r);
double		ft_cone(const t_object *o, t_tdata *td,
						const t_scene *s, t_ray *r);
double		ft_disc(const t_object *o, t_tdata *td,
						const t_scene *s, t_ray *r);
double		ft_half_sphere(const t_object *o, t_tdata *td,
						const t_scene *s, t_ray *r);
double		ft_quadric(const t_object *o, t_tdata *td,
						const t_scene *s, t_ray *r);
double		ft_triangle(const t_object *o, t_tdata *td,
						const t_scene *s, t_ray *r);
double		ft_tetrahedron(const t_object *o, t_tdata *td,
						const t_scene *s, t_ray *r);
t_cd		ft_get_vector(register const t_cd *const start,
							register const t_cd *const end);
void		ft_get_n_vector(register const t_cd vec,
							register t_cd *const n_vec,
							register double hypo);
int			ft_get_color(double *r, double *g, double *b);
t_cd		ft_get_hitpoint(t_cd *cam, double dist, t_cd *ray);
double		ft_dist(t_cd p1, t_cd p2);
void		ft_get_view_vector(register t_cd *const v,
								register const t_cd *const cam,
								register const t_cd *const hp);
void		ft_get_reflection_vector(register t_cd *const v_r,
								register const t_cd *const v_n,
								register const t_cd *const v_l,
								const int status);
t_cd		ft_get_refraction_vector(register const t_cd ray);
void		ft_get_light_vector(register t_cd *const v,
								register const t_object *const light,
								register const t_cd *const hp);
void		ft_get_surface_normal(register t_cd *const v,
								register const t_tdata *const td,
								register const t_object *const o,
								register const t_cd *const hp);
void		ft_get_sphere_normal(register t_cd *const v_n,
								register const t_tdata *const td,
								register const t_object *const o,
								register const t_cd *const hp);
void		ft_get_half_sphere_normal(register t_cd *const v_n,
								register const t_tdata *const td,
								register const t_object *const o,
								register const t_cd *const hp);
void		ft_get_cylinder_normal(register t_cd *const v_n,
								register const t_tdata *const td,
								register const t_object *const o,
								register const t_cd *const hp);
void		ft_get_quadric_normal(register t_cd *const v_n,
								register const t_tdata *const td,
								register const t_object *const o,
								register const t_cd *const hp);
void		ft_get_tetrahedron_normal(register t_cd *const v_n,
								register const t_tdata *const td,
								register const t_object *const o,
								register const t_cd *const hp);
void		ft_get_object_normal(register t_cd *const v_n,
								register const t_tdata *const td,
								register const t_object *const o,
								register const t_cd *const hp);
void		ft_get_normal_perturbation(register t_cd *const v_n,
										register const t_tdata *const td,
										register const t_object *const o);
void		ft_get_light_data(t_tdata *td, t_ldata *d,
								t_object *o, t_object *l);
void		ft_check_light(double *color);
void		ft_display_scene_info(char *name, int st, int time);
void		ft_display_camera_info(int st, int cam, int max_cam);
void		ft_get_ray(t_ray *r, t_object *c, t_cd *point);
void		ft_inc_x(t_cd *p, t_cd incx);
void		ft_inc_y(t_cd *p, t_cd incy);
void		ft_set_x(t_cd *p, t_cd tlp, int y, t_cd incy);
double		ft_ambient(t_ldata *d, t_object *o);
void		ft_apply_noise(t_tdata *td, t_ldata *ld, t_object *o);
void		ft_apply_light(t_tdata *td, t_ldata *d, t_object *l, t_object *o);
int			ft_apply_shadow(t_tdata *td, t_object *l, double at_dist);
void		ft_apply_ambient(t_ldata *d, t_object *o);
void		ft_apply_reflection(t_object *o, t_ldata *ld,
								t_tdata *td, const int c);
void		ft_apply_refraction(t_object *o, t_tdata *td, t_ray *ray);
int			ft_error(char *msg);
int			ft_event(unsigned int key, t_data *d);
int			ft_draw_img(t_data *d);
int			*ft_generate_table(const int seed, const int size);
double		ft_noise(const int *prm, double x, double y, double z);
double		fractal_noise(register t_noise n, register const double x,
						register const double y, register const double z);
int			ft_rand(int min, int max);
int			ft_mouse_hook(int button, int x, int y, t_data *d);
int			ft_loop_hook(t_data *d);
void		ft_get_image_data(t_image *img);
void		ft_fill_image(t_image *img, int color, int w, int h);
int			ft_switch_scene(int num, t_data *d);
t_button	**ft_create_buttons(t_data *d);
t_button	*ft_create_button(t_data *d, t_square *q, int x_space);
int			ft_in_button(t_button **buttons, int mx, int my, t_data *d);
int			ft_draw_buttons(t_button **buttons, t_data *d);
int			ft_gcd(int a, int b);
void		ft_put_img(t_data *d, void *img, int x, int y);
void		ft_set_button_colors(t_button *b);
void		ft_set_button_position(t_button *b, t_square *q, int x_space);
void		ft_set_button_image_1(t_data *d, t_button *b, t_square *q);
void		ft_set_button_image_2(t_data *d, t_button *b, t_square *q);
void		ft_set_button_image_3(t_data *d, t_button *b, t_square *q);
void		ft_set_button_image_4(t_data *d, t_button *b, t_square *q);
void		ft_right_key(t_data *d);
void		ft_left_key(t_data *d);
void		ft_up_key(t_data *d);
void		ft_down_key(t_data *d);
void		ft_esc_key(t_data *d);
void		ft_modulo_key(int *n, const int max, const int dir);
void		ft_sepia_effect(double effect[3], double color[3]);
void		ft_negative_effect(double effect[3], double color[3]);
void		ft_move_forward(t_data *d);
void		ft_move_backward(t_data *d);
void		ft_move_right(t_data *d);
void		ft_move_left(t_data *d);
void		ft_turn_right(t_data *d);
void		ft_turn_left(t_data *d);
void		ft_rotate_right(t_data *d);
void		ft_rotate_left(t_data *d);
void		ft_rotate_up(t_data *d);
void		ft_rotate_down(t_data *d);
t_object	*ft_get_camera(t_scene *s, int *i);
void		ft_render_camera(t_object *cam, t_scene *s);
void		ft_record_camera(t_scene *s, t_object *cam, char *name);
void		ft_print_recorded_camera_start_line(int fd);
void		ft_print_recorded_camera_end_line(int fd);
void		ft_print_recorded_camera_position(int fd, t_cd *p);
void		ft_print_recorded_camera_normal_vector(int fd, t_cd *n);
void		ft_print_recorded_camera_up_vector(int fd, t_cd *u);
void		ft_print_help(void);
void		ft_print_examples(void);
void		ft_print_keys(void);
void		ft_help(void);

#endif
