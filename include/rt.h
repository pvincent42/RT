/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rt.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/26 10:42:29 by rdavid            #+#    #+#             */
/*   Updated: 2014/03/27 16:37:10 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RT_H
# define RT_H

# define WX					2560.0
# define WY					1440.0
# define FOV_W				60.0
# define TITLE				"rt"
# define MLX_ESC_KEY		65307
# define MLX_DOWN_KEY		65364
# define MLX_LEFT_KEY		65361
# define MLX_UP_KEY			65362
# define MLX_RIGHT_KEY		65363
# define MLX_KEY_2			50
# define MLX_KEY_4			52
# define MLX_KEY_6			54
# define MLX_KEY_8			56
# define MLX_KEY_A			97
# define MLX_KEY_D			100
# define MLX_KEY_E			101
# define MLX_KEY_I			105
# define MLX_KEY_J			106
# define MLX_KEY_K			107
# define MLX_KEY_L			108
# define MLX_KEY_N			110
# define MLX_KEY_Q			113
# define MLX_KEY_R			114
# define MLX_KEY_S			115
# define MLX_KEY_W			119
# define MLX_KEY_X			120
# define MLX_KEY_Z			122
# define MLX_KEY_U			117
# define MLX_KEY_O			111
# define SPHERE				0
# define CYLINDER			1
# define PLANE				2
# define CONE				3
# define DISC				4
# define HALF_S				5
# define QUADRIC			6
# define TRIANGLE			7
# define TETRAHEDRON		8
# define SPOT				101
# define ABC				4001
# define ABD				4002
# define ACD				4003
# define BCD				4004
# define EXT				".sc"
# define INSIDE				1000
# define OUTSIDE			2000
# define SHADOW				100
# define PERLIN				10000
# define NO_PERLIN			10001
# define MAX_NOISE			13
# define SCENE_BUTTON		20000
# define NO_EFFECT			-1
# define NEGATIVE			0
# define SEPIA				1
# define SPEED				50

# include <pthread.h>
# include <sys/time.h>
# include <rt_struct.h>
# include <rt_protos.h>

#endif
