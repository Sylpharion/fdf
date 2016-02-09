/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smassand <smassand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 16:08:21 by smassand          #+#    #+#             */
/*   Updated: 2016/02/02 16:08:28 by smassand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		map_up(t_map *sizes)
{
	mlx_clear_window(sizes->mlx, sizes->win);
  	sizes->pos_y -= 10;
  	drawing_test(sizes);
}

void		map_down(t_map *sizes)
{
	mlx_clear_window(sizes->mlx, sizes->win);
  	sizes->pos_y += 10;
  	drawing_test(sizes);
}

void		map_left(t_map *sizes)
{
	mlx_clear_window(sizes->mlx, sizes->win);
  	sizes->pos_x -= 10;
  	drawing_test(sizes);
}

void		map_right(t_map *sizes)
{
	mlx_clear_window(sizes->mlx, sizes->win);
  	sizes->pos_x += 10;
  	drawing_test(sizes);
}
