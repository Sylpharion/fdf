/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_map_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smassand <smassand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 17:48:05 by smassand          #+#    #+#             */
/*   Updated: 2016/01/19 17:48:13 by smassand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void			draw_x_deux(t_map *sizes, t_point *points, int x, int y)
{
	points->z = sizes->map[y][x] > 0 ? sizes->map[y][x] + sizes->size_z :
				sizes->map[y][x];
	points->x0 = ((sizes->mod * x) + (sizes->pos_x + (y * sizes->mod)) + 0);
	points->y0 = ((sizes->mod * y) + (sizes->pos_y - 100)) + (0 -
					points->z);
	points->z = sizes->map[y][x + 1] > 0 ? sizes->map[y][x + 1] +
				sizes->size_z : sizes->map[y][x + 1];
	points->x1 = ((sizes->mod * (x + 1)) + (sizes->pos_x +
					(y * sizes->mod)) + 0);
	points->y1 = ((sizes->mod * y) + (sizes->pos_y - 100)) + (0 -
					points->z);
	points->z = sizes->map[y][x + 1] > sizes->map[y][x] ?
					sizes->map[y][x + 1] + sizes->size_z :
					sizes->map[y][x] + sizes->size_z;
	drawing_line(*points, sizes);
}

void			draw_y_deux(t_map *sizes, t_point *points, int x, int y)
{
	points->z = sizes->map[y][x + 1] > 0 ? sizes->map[y][x + 1] +
				sizes->size_z : sizes->map[y][x + 1];
	points->x0 = (sizes->mod * (x + 1)) + (sizes->pos_x +
					(y * sizes->mod)) + 0;
	points->y0 = ((sizes->mod * y) + (sizes->pos_y - 100)) + (0 -
					points->z);
	points->z = sizes->map[y + 1][x + 1] > 0 ? sizes->map[y + 1][x + 1] +
				sizes->size_z : sizes->map[y + 1][x + 1];
	points->x1 = ((sizes->mod * (x + 2)) + (sizes->pos_x +
					(y * sizes->mod)) + 0);
	points->y1 = ((sizes->mod * (y + 1)) + (sizes->pos_y - 100)) + (0 -
					points->z);
	points->z = sizes->map[y + 1][x + 1] > sizes->map[y][x + 1] ?
					sizes->map[y + 1][x + 1] + sizes->size_z :
					sizes->map[y][x + 1] + sizes->size_z;
	drawing_line(*points, sizes);
}

void			drawing_paral(t_map *sizes, int y)
{
	int			x;
	t_point		p;

	while (y < sizes->size_y - 1)
	{
		x = 0;
		while (x < sizes->size_x - 1)
		{
			if (x == 0 && (y + 1 < sizes->size_y) &&
				(x + 1 < sizes->len[y + 1] - 1) &&
				(x + 1 < sizes->len[y] - 1))
				draw_y_deux(sizes, &p, x - 1, y);
			if ((y == sizes->size_y - 2) && (x + 1 < sizes->len[y] - 1))
				draw_x_deux(sizes, &p, x, y + 1);
			if (x + 1 < sizes->len[y] - 1)
				draw_x_deux(sizes, &p, x, y);
			if ((y + 1 < sizes->size_y) && (x + 1 < sizes->len[y + 1] - 1)
					&& (x + 1 < sizes->len[y] - 1))
				draw_y_deux(sizes, &p, x, y);
			x++;
		}
		if (y == sizes->size_y && (x + 1 < sizes->len[y] - 1))
			draw_x_deux(sizes, &p, x, y);
		y++;
	}
}

void			draw(t_map *sizes)
{
	if (sizes->proj % 3 == 0)
		drawing_basic(sizes, 0);
	else if (sizes->proj % 3 == 1)
		drawing_iso(sizes, 0);
	else if (sizes->proj % 3 == 2)
		drawing_paral(sizes, 0);
}
