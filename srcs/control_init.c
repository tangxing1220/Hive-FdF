/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <xtang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 18:37:41 by xtang             #+#    #+#             */
/*   Updated: 2020/08/13 19:51:07 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	controler_init(t_ctler **ctler, t_image_map *image_map)
{
	int tmp_width;
	int tmp_height;

	(*ctler) = (t_ctler *)malloc(sizeof(t_ctler));
	(*ctler)->projection_type = PRO_ISO;
	tmp_width = WIN_WIDTH / image_map->image_width / 2;
	tmp_height = WIN_HEIGHT / image_map->image_height / 2;
	if (tmp_width > tmp_height)
		(*ctler)->camera_zoom = tmp_height;
	else
		(*ctler)->camera_zoom = tmp_width;
	(*ctler)->camera_alpha = 0;
	(*ctler)->camera_beta = 0;
	(*ctler)->camera_gamma = 0;
	(*ctler)->camera_z_divisor = 1;
	(*ctler)->camera_offset_x = 0;
	(*ctler)->camera_offset_y = 0;
}
