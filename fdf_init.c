/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smassand <smassand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 17:48:05 by smassand          #+#    #+#             */
/*   Updated: 2016/01/19 17:48:13 by smassand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		point_init(t_point *points)
{
	points->x0 = 0;
	points->y0 = 0;
	points->x1 = 0;
	points->y1 = 0;
	points->z = 0;
}

void		draw_init(t_draw *drawing)
{
	drawing->dx = 0;
	drawing->dy = 0;
	drawing->err = 0;
	drawing->e2 = 0;
	drawing->sx = 0;
	drawing->sy = 0;
}

void		map_init(t_map *sizes)
{
	sizes->size_y = 0;
	sizes->size_x = 0;
	sizes->size_z = 0;
	sizes->pos_x = 100;
	sizes->pos_y = 100;
	sizes->mlx = mlx_init();
	sizes->win = mlx_new_window(sizes->mlx, 1200, 1200, "mlx_42");
	sizes->fd = 0;
	sizes->map = 0;
	sizes->raw_map = NULL;
	sizes->len = 0;
	sizes->mod = 20;
	sizes->color = 0;
}
