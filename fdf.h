/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smassand <smassand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/11 17:49:12 by smassand          #+#    #+#             */
/*   Updated: 2016/01/18 16:54:54 by smassand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <stdio.h>
# include <string.h>
# include <math.h>
# include "minilibx_macos/mlx.h"
# include "libft/libft.h"

# define WHITE 0xFFFFFF
# define DARK_GREEN 0x006000
# define GREEN 0x00FF00
# define CYAN 0x00FFFF
# define YELLOW 0xFFFF00
# define ORANGE 0xFF8000
# define RED 0xFF0000
# define DARK_BLUE 0x000033
# define MARINE_BLUE 0x000099
# define BLUE 0x0000FF
# define LIGHT_BLUE 0x0066FF
# define AQUA_BLUE 0x00CCFF
# define BLACK 0x000000
# define GRAY 0x696969
# define STEEL_GRAY 0xDCDCDC
# define LIGHT_GRAY 0xEEEEEE
# define WHITE_SMOKE 0xF5F5F5

typedef struct s_map
{
	double 	size_y;
	double 	size_x;
	double 	size_z;
	double 	pos_x;
	double 	pos_y;
	void 	*mlx;
	void 	*win;
	int		fd;
	int		**map;
	char 	**raw_map;
	int 	*len;
	int 	mod;
	int 	color;
}				t_map;

typedef struct s_draw
{
 	int 	dx;
 	int 	dy;
 	int 	err;
 	int 	e2;
 	int 	sx;
 	int 	sy;
}				t_draw;

typedef struct s_point
{
	double 	x0;
	double 	y0;
	double 	x1;
	double 	y1;
	int 	z;
}				t_point;

int		array_len(char **a);
void	map_init(t_map *sizes);
char	**get_file_content(t_map sizes);
int		get_map_size(t_map *sizes);
void	create_map(t_map *sizes);

void	draw_init(t_draw *drawing);
void	point_init(t_point *points);
void 	drawing_test(t_map *sizes);
int		drawing_color(t_point points, t_map sizes);
void	drawing_line(t_point points, t_map *sizes);
void	draw_x(t_map *sizes, t_point *points, int x, int y);
void	draw_y(t_map *sizes, t_point *points, int x, int y);
int		my_key(int keycode, t_map *sizes);

void	draw_x_deux(t_map *sizes, t_point *points, int x, int y);
void	draw_y_deux(t_map *sizes, t_point *points, int x, int y);
void	drawing_test_deux(t_map *sizes);

void	map_up(t_map *sizes);
void	map_down(t_map *sizes);
void	map_left(t_map *sizes);
void	map_right(t_map *sizes);
void	z_up(t_map *sizes);
void	z_down(t_map *sizes);
void	size_up(t_map *sizes);
void	size_down(t_map *sizes);
void	color_change(t_map *sizes);

int		put_color(int color);
int		therm_color(int color);
int		blue_color(int color);
int		nb_color(int color);

#endif