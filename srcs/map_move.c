/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smassand <smassand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 16:08:21 by smassand          #+#    #+#             */
/*   Updated: 2016/02/10 05:33:39 by smassand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

void	map_up(t_map *sizes)
{
	mlx_clear_window(sizes->mlx, sizes->win);
	sizes->pos_y -= 10;
	draw(sizes);
}

void	map_down(t_map *sizes)
{
	mlx_clear_window(sizes->mlx, sizes->win);
	sizes->pos_y += 10;
	draw(sizes);
}

void	map_left(t_map *sizes)
{
	mlx_clear_window(sizes->mlx, sizes->win);
	sizes->pos_x -= 10;
	draw(sizes);
}

void	map_right(t_map *sizes)
{
	mlx_clear_window(sizes->mlx, sizes->win);
	sizes->pos_x += 10;
	draw(sizes);
}

void	map_project(t_map *sizes)
{
	mlx_clear_window(sizes->mlx, sizes->win);
	sizes->proj += 1;
	draw(sizes);
}
