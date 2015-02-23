#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/03/02 06:39:57 by rdavid            #+#    #+#              #
#    Updated: 2014/03/27 22:22:14 by rdavid           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

SRC_PATH =	src/
OBJ_PATH =	obj/

RT_PATH	=	$(SRC_PATH)raytracer/
PS_PATH =	$(SRC_PATH)parser/
VC_PATH =	$(SRC_PATH)vectools/
NS_PATH =	$(SRC_PATH)noises/
MG_PATH =	$(SRC_PATH)generators/

RT_SRCS =	main.c \
			ft_print_examples.c \
			ft_print_keys.c \
			ft_print_help.c \
			ft_help.c \
			ft_main_loop.c \
			ft_parse_options.c \
			ft_compute_options.c \
			ft_invalid_option.c \
			ft_set_data.c \
			ft_run_scenes.c \
			ft_run_miniscenes.c \
			ft_create_pool.c \
			ft_run_thread.c \
			ft_ray_caster.c \
			ft_ray_tracer.c \
			ft_quadric.c \
			ft_set_light.c \
			ft_apply_noise.c \
			ft_apply_light.c \
			ft_apply_shadow.c \
			ft_apply_ambient.c \
			ft_apply_reflection.c \
			ft_apply_refraction.c \
			ft_put_pixel.c \
			ft_list_tools.c \
			ft_get_color.c \
			ft_get_hitpoint.c \
			ft_dist.c \
			ft_sphere.c \
			ft_half_sphere.c \
			ft_disc.c \
			ft_plane.c \
			ft_cone.c \
			ft_cylinder.c \
			ft_triangle.c \
			ft_tetrahedron.c \
			ft_get_light_data.c \
			ft_get_view_vector.c \
			ft_get_reflection_vector.c \
			ft_get_refraction_vector.c \
			ft_get_light_vector.c \
			ft_get_surface_normal.c \
			ft_get_sphere_normal.c \
			ft_get_half_sphere_normal.c \
			ft_get_cylinder_normal.c \
			ft_get_quadric_normal.c \
			ft_get_tetrahedron_normal.c \
			ft_get_object_normal.c \
			ft_get_normal_perturbation.c \
			ft_check_light.c \
			ft_display_scene_info.c \
			ft_get_ray.c \
			ft_abs.c \
			ft_error.c \
			ft_event.c \
			ft_draw_img.c \
			ft_new_sphere.c \
			ft_new_half_sphere.c \
			ft_new_plane.c \
			ft_new_cylinder.c \
			ft_new_cone.c \
			ft_new_spot.c \
			ft_new_disc.c \
			ft_new_quadric.c \
			ft_new_triangle.c \
			ft_new_tetrahedron.c \
			ft_perlin.c \
			ft_rand.c \
			ft_mouse_hook.c \
			ft_create_buttons.c \
			ft_loop_hook.c \
			ft_gcd.c \
			ft_fill_image.c \
			ft_get_image_data.c \
			ft_switch_scene.c \
			ft_in_button.c \
			ft_put_img.c \
			ft_draw_buttons.c \
			ft_create_button.c \
			ft_set_button_colors.c \
			ft_set_button_position.c \
			ft_set_button_image_1.c \
			ft_set_button_image_2.c \
			ft_set_button_image_3.c \
			ft_set_button_image_4.c \
			ft_right_key.c \
			ft_left_key.c \
			ft_up_key.c \
			ft_down_key.c \
			ft_esc_key.c \
			ft_modulo_key.c \
			ft_generate_table.c \
			ft_fractal_noise.c \
			ft_sepia_effect.c \
			ft_negative_effect.c \
			ft_move_forward.c \
			ft_move_backward.c \
			ft_move_right.c \
			ft_move_left.c \
			ft_turn_right.c \
			ft_turn_left.c \
			ft_rotate_right.c \
			ft_rotate_left.c \
			ft_rotate_up.c \
			ft_rotate_down.c \
			ft_get_camera.c \
			ft_render_camera.c \
			ft_record_camera.c \
			ft_print_recorded_camera_start_line.c \
			ft_print_recorded_camera_end_line.c \
			ft_print_recorded_camera_position.c \
			ft_print_recorded_camera_normal_vector.c \
			ft_print_recorded_camera_up_vector.c \

PS_SRCS =	ft_check_background.c \
			ft_check_scene.c \
			ft_check_camera.c \
			ft_close_files.c \
			ft_cylinder_object.c \
			ft_get_all_scenes.c \
			ft_get_cylinder.c \
			ft_get_next_color.c \
			ft_get_next_number.c \
			ft_get_object.c \
			ft_get_object_type.c \
			ft_get_plane.c \
			ft_get_sphere.c \
			ft_get_valid_file_number.c \
			ft_get_valid_files.c \
			ft_init_scene.c \
			ft_init_scene_imgs.c \
			ft_parse_cylinder.c \
			ft_parse_plane.c \
			ft_parse_sphere.c \
			ft_plane_object.c \
			ft_read_scene.c \
			ft_sphere_object.c \
			ft_get_half_sphere.c \
			ft_parse_half_sphere.c \
			ft_half_sphere_object.c \
			ft_disc_object.c \
			ft_get_disc.c \
			ft_parse_disc.c \
			ft_strc.c \
			ft_valid_name.c \
			ft_get_spot.c \
			ft_parse_spot.c \
			ft_cone_object.c \
			ft_parse_cone.c \
			ft_get_cone.c \
			ft_quadric_object.c \
			ft_parse_quadric.c \
			ft_get_quadric.c \
			ft_triangle_object.c \
			ft_get_triangle.c \
			ft_parse_triangle.c \
			ft_tetrahedron_object.c \
			ft_get_tetrahedron.c \
			ft_parse_tetrahedron.c \
			ft_get_next_point.c \
			ft_get_ambiant_color.c \
			ft_get_cam_viewplane.c \
			ft_get_viewplane_top_left_point.c \
			ft_get_viewplane_top_right_point.c \
			ft_get_viewplane_bottom_left_point.c \
			ft_strinstr.c \
			ft_parse_coefficients.c \
			ft_parse_noise.c \
			ft_assign_noise_tables.c \
			ft_get_next_line_2.c \
			ft_parse_effects.c \

VC_SRCS =	ft_set_vec.c \
			ft_add_vec.c \
			ft_sub_vec.c \
			ft_mul_vec.c \
			ft_div_vec.c \
			ft_rev_vec.c \
			ft_dot_vec.c \
			ft_uni_vec.c \
			ft_cross_vec.c \
			ft_abs_vec.c \
			ft_get_vector.c \
			ft_get_n_vector.c \

NS_SRCS =	ft_noise_1.c \
			ft_noise_2.c \
			ft_noise_3.c \
			ft_noise_4.c \
			ft_noise_5.c \
			ft_noise_6.c \
			ft_noise_7.c \
			ft_noise_8.c \
			ft_noise_9.c \
			ft_noise_10.c \
			ft_noise_11.c \
			ft_noise_12.c \
			ft_noise_13.c \
			ft_noise_14.c \

MG_SRCS =	ft_generate_material_grid.c \
			ft_generate_sphere_field.c \
			ft_print_sphere.c \
			ft_print_sphere_color.c \
			ft_print_sphere_endline.c \
			ft_print_sphere_light_coefficients.c \
			ft_print_sphere_noise_coefficients.c \
			ft_print_sphere_normal.c \
			ft_print_sphere_position.c \
			ft_print_sphere_radius.c \
			ft_print_sphere_random_noise.c \
			ft_print_sphere_random_normal_noise.c \
			ft_random_gen.c \
			ft_set_ivec.c \
			ft_set_grid.c \
			ft_set_grid_obj.c \
			ft_print_scene_basics.c \
			ft_print_sphere_field_scene_basics.c \
			ft_generate_y_layer.c \
			ft_generate_curve.c \
			ft_sphere_overlap.c \
			ft_int_dist.c \

RT_OBJ_PATH	=	$(OBJ_PATH)raytracer/
PS_OBJ_PATH =	$(OBJ_PATH)parser/
VC_OBJ_PATH =	$(OBJ_PATH)vectools/
NS_OBJ_PATH =	$(OBJ_PATH)noises/
MG_OBJ_PATH =	$(OBJ_PATH)generators/

RT_OBJS	=	$(patsubst %.c, $(RT_OBJ_PATH)%.o,$(RT_SRCS))
PS_OBJS =	$(patsubst %.c, $(PS_OBJ_PATH)%.o,$(PS_SRCS))
VC_OBJS =	$(patsubst %.c, $(VC_OBJ_PATH)%.o,$(VC_SRCS))
NS_OBJS =	$(patsubst %.c, $(NS_OBJ_PATH)%.o,$(NS_SRCS))
MG_OBJS =	$(patsubst %.c, $(MG_OBJ_PATH)%.o,$(MG_SRCS))

LDIR	=	libft/
LNAME	=	libft.a
CC		=	gcc
FLAGS	=	-O3 -fomit-frame-pointer -ffast-math -funroll-loops \
			-g1 -L/usr/include/X11/lib -L/usr/include/X11/ -pthread\
			-I/usr/include -I/usr/include/X11 \
			-Wall -Werror -Wextra
HEADERS =	-I./include -I./libft/includes -I./minilibx
NAME	=	rt

all: $(NAME)

$(NAME): $(RT_OBJS) $(VC_OBJS) $(PS_OBJS) $(NS_OBJS) $(MG_OBJS)
	@make -C $(LDIR)
	@$(CC)	$(FLAGS) $(HEADERS) \
			$(RT_OBJS) $(VC_OBJS) $(PS_OBJS) $(NS_OBJS) $(MG_OBJS) \
			-o $(NAME) $(LDIR)$(LNAME) libmlx_Linux.a -lm -lXext -lX11

$(patsubst %, $(RT_OBJ_PATH)%,%.o): $(RT_PATH)$(notdir %.c)
	@mkdir -p $(RT_OBJ_PATH)
	@$(CC) -c $(FLAGS) $(HEADERS) "$<" -o "$@"

$(patsubst %, $(PS_OBJ_PATH)%,%.o): $(PS_PATH)$(notdir %.c)
	@mkdir -p $(PS_OBJ_PATH)
	@$(CC) -c $(FLAGS) $(HEADERS) "$<" -o "$@"

$(patsubst %, $(VC_OBJ_PATH)%,%.o): $(VC_PATH)$(notdir %.c)
	@mkdir -p $(VC_OBJ_PATH)
	@$(CC) -c $(FLAGS) $(HEADERS) "$<" -o "$@"

$(patsubst %, $(NS_OBJ_PATH)%,%.o): $(NS_PATH)$(notdir %.c)
	@mkdir -p $(NS_OBJ_PATH)
	@$(CC) -c $(FLAGS) $(HEADERS) "$<" -o "$@"

$(patsubst %, $(MG_OBJ_PATH)%,%.o): $(MG_PATH)$(notdir %.c)
	@mkdir -p $(MG_OBJ_PATH)
	@$(CC) -c $(FLAGS) $(HEADERS) "$<" -o "$@"

clean:
	@rm -rf	$(RT_OBJ_PATH) \
			$(PS_OBJ_PATH) \
			$(VC_OBJ_PATH) \
			$(NS_OBJ_PATH) \
			$(MG_OBJ_PATH)
	@make -C $(LDIR) clean

fclean: clean
	@rm -rf $(OBJ_PATH)
	@rm -f $(NAME)
	@make -C $(LDIR) fclean

re: fclean all

.PHONY: clean fclean re
