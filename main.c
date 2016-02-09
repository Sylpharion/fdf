/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smassand <smassand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 14:36:53 by smassand          #+#    #+#             */
/*   Updated: 2016/01/18 16:54:08 by smassand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	my_key(int keycode, t_map *sizes)
{
  printf("keycode : %d\n", keycode);
  	if (keycode == 126)
  		z_up(sizes);
  	if (keycode == 125)
  		z_down(sizes);
  	if (keycode == 69)
  		size_up(sizes);
  	if (keycode == 78)
  		size_down(sizes);
  	if (keycode == 91)
  		map_up(sizes);
  	if (keycode == 86)
  		map_left(sizes);
  	if (keycode == 88)
  		map_right(sizes);
  	if (keycode == 84)
  		map_down(sizes);
  	if (keycode == 82)
  		color_change(sizes);
  	if (keycode == 49)
  	{
  		mlx_clear_window(sizes->mlx, sizes->win);
  		ft_putnbr(sizes->size_x);
  		ft_putnbr(sizes->size_y);
  		drawing_test(sizes);
  	}
	if (keycode == 53)
  		exit(0);
	return (0);
}

int down_ald(int keycode)
{
	if (keycode == 1)
		exit(0);
	if (keycode == 2)
		exit(0);
	return (0);
}

int		main(int argc, char const **argv)
{
	t_map	sizes;

	map_init(&sizes);
	if (argc != 2)
		return (1);
	sizes.fd = open(argv[1], O_RDONLY);
	sizes.raw_map = get_file_content(sizes);
/* *********** test ***************** 
	ft_putendl("raw map:");
	int ii = 0;
	while (sizes.raw_map[ii])
	{
		ft_putendl(sizes.raw_map[ii]);
		ii++;
	}*/
//************************************ 
	get_map_size(&sizes);
	create_map(&sizes);
	drawing_test_deux(&sizes);
	ft_putstr("\nsucces");
	mlx_hook(sizes.win, 2, 64, my_key, &sizes);
	mlx_mouse_hook(sizes.win, down_ald, 0);
	mlx_loop(sizes.mlx);
	return (0);
}
