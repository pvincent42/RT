/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rt_struct.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/26 10:51:00 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/27 19:52:34 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RT_STRUCT_H
# define RT_STRUCT_H

typedef union				u_pow_op
{
	double					d;
	int						x[2];
}							t_pow_op;

typedef struct				s_cd
{
	double					x;
	double					y;
	double					z;
}							t_cd;

typedef struct				s_ci
{
	int						x;
	int						y;
	int						z;
}							t_ci;

typedef struct				s_square
{
	int						x;
	int						y;
	int						w;
	int						h;
	int						xw;
	int						yh;
}							t_square;

typedef struct				s_noise
{
	int						*prm;
	int						type;
	int						color;
	int						normal;
	int						layers;
	double					frequency;
	double					lacunarity;
	double					amplitude;
	double					gain;
}							t_noise;

typedef struct				s_noise_type
{
	double					(*f)(register const t_noise *const n,
								register const double *const x,
								register const double *const y,
								register const double *const z);
}							t_noise_type;

typedef struct				s_viewplane
{
	double					hw;
	double					hh;
	t_cd					tlp;
	t_cd					trp;
	t_cd					blp;
	t_cd					u;
	t_cd					v;
}							t_viewplane;

typedef struct				s_object
{
	int						type;
	t_cd					p;
	t_cd					n;
	t_cd					ndot;
	double					r;
	double					r2;
	double					dc[3];
	double					sc[3];
	double					lc[3];
	double					ka;
	double					kd;
	double					ks;
	double					krl;
	double					krr;
	double					kt;
	double					shine;
	double					ac[3];
	t_noise					ns;
	t_cd					q1;
	t_cd					q2;
	t_cd					q3;
	int						o;
	t_cd					ta;
	t_cd					tb;
	t_cd					tc;
	t_cd					td;
	t_cd					tn1;
	t_cd					tn2;
	t_cd					tn3;
	t_cd					tn4;
	int						face;
	t_cd					up;
	t_viewplane				vp;
}							t_object;

typedef struct				s_ray
{
	t_cd					nv;
	t_cd					s;
	t_cd					v;
	t_cd					d;
}							t_ray;

typedef struct				s_elem
{
	t_object				*o;
	struct s_elem			*next;
	struct s_elem			*prev;
}							t_elem;

typedef struct				s_list
{
	int						size;
	t_elem					*begin;
	t_elem					*end;
}							t_list;

typedef struct				s_ray_params
{
	t_elem					*ow;
	double					t;
	t_object				*o;
}							t_ray_params;

typedef struct				s_image
{
	char					*p_data;
	void					*data;
	int						bpp;
	int						sizeline;
	int						endian;
}							t_image;

typedef struct				s_scene
{
	t_list					*objs;
	t_list					*spots;
	t_image					*img;
	t_image					aa_img;
	int						aa_val;
	t_object				*cam;
	t_list					*cams;
	int						dcs;
	int						mdcs;
	int						bg_color;
	double					ac[3];
	char					*name;
	t_image					mini_img;
	int						mini_img_done;
	int						current_cam;
	t_cd					xi;
	t_cd					yi;
	int						sx;
	int						sy;
	int						cam_num;
	int						*prm;
	unsigned int			seed;
	int						effect;
	int						record_file_created;
}							t_scene;

typedef struct				s_ldata
{
	t_cd					n;
	t_cd					l;
	t_cd					r;
	t_cd					v;
	int						cc;
	double					anl;
	double					c[3];
	double					at;
}							t_ldata;

typedef struct				s_data
{
	void					*init;
	void					*win;
	double					to_rad;
	t_scene					**scenes;
	int						cs;
	int						sl;
	struct timeval			st;
	struct timeval			ed;
	int						*prm;
	struct s_button			**buttons;
	int						current_frame;
	int						sx;
	int						sy;
	int						wx;
	int						wy;
	int						scene_done;
	int						interactive;
	int						recording;
}							t_data;

typedef struct				s_button
{
	int						x;
	int						y;
	int						w;
	int						h;
	int						xw;
	int						yh;
	int						type;
	int						scene_num;
	t_image					status_img[4];
	int						scene_status;
	int						c[4];
}							t_button;

typedef struct				s_tdata
{
	t_scene					*s;
	t_cd					hp;
	double					cdist;
	t_object				*no_check;
	int						side;
	t_cd					p;
	int						y;
	t_cd					xi;
	t_cd					yi;
	int						tl;
	double					rc[3];
	double					fc[3];
	t_cd					nhp;
	int						wx;
	int						cam_num;
}							t_tdata;

typedef struct				s_thread
{
	pthread_t				init;
	t_tdata					d;
}							t_thread;

typedef struct				s_pool
{
	t_thread				*pth;
}							t_pool;

typedef struct				s_object_type
{
	double					(*f)(const t_object *o, t_tdata *td,
								const t_scene *s, t_ray *r);
}							t_object_type;

typedef struct				s_key_type
{
	void					(*f)(t_data *d);
}							t_key_type;

typedef struct				s_object_normal
{
	void					(*f)(register t_cd *const v_n,
								register const t_tdata *const td,
								register const t_object *const o,
								register const t_cd *const hp);
}							t_object_normal;

typedef struct				s_image_effect
{
	void					(*f)(double effect[3], double color[3]);
}							t_image_effect;

#endif
