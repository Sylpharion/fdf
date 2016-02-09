/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smassand <smassand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 14:36:53 by smassand          #+#    #+#             */
/*   Updated: 2016/01/18 16:54:08 by smassand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		z_up(t_map *sizes)
{
	mlx_clear_window(sizes->mlx, sizes->win);
	sizes->size_z += 2;
	drawing_test(sizes);
}

void		z_down(t_map *sizes)
{
	mlx_clear_window(sizes->mlx, sizes->win);
	sizes->size_z -= 2;
	drawing_test(sizes);
}

void		size_up(t_map *sizes)
{
	mlx_clear_window(sizes->mlx, sizes->win);
	sizes->mod += 2;
	drawing_test(sizes);
}

void		size_down(t_map *sizes)
{
	mlx_clear_window(sizes->mlx, sizes->win);
	sizes->mod -= 2;
	drawing_test(sizes);
}

void		color_change(t_map *sizes)
{
	mlx_clear_window(sizes->mlx, sizes->win);
	sizes->color += 6;
	drawing_test(sizes);
}