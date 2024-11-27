/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:14:42 by matomas           #+#    #+#             */
/*   Updated: 2024/11/27 13:57:45 by matomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_load_img(t_info_map *data)
{
	int	img_h; 
	int	img_w;

    data->images = malloc(sizeof(t_images));
    if (!data->images)
        ft_exit_with_error("Error: No se pudo asignar memoria para imágenes");
    data->images->player = mlx_xpm_file_to_image(data->mlx, PLAYER, &img_w, &img_h);
    if (!data->images->player)
        ft_exit_with_error("Error: No se pudo cargar textura del jugador");
    // Repite para otros recursos...
}

void ft_init_graphics(t_info_map *data) {
    data->mlx = mlx_init();
    if (!data->mlx)
        ft_exit_with_error("Error: No se pudo inicializar mlx");
    data->win = mlx_new_window(data->mlx, data->width * TILE_SIZE, data->hight * TILE_SIZE, "so_long");
    if (!data->win)
        ft_exit_with_error("Error: No se pudo crear ventana");
}

int main(int argc, char **argv) {
    t_info_map data;

    if (argc == 2) {
        ft_reset_data(&data, argv[1]);
        ft_map_size(&data);
        ft_malloc_map(&data);
        ft_general_check(&data);
        ft_init_graphics(&data);
        ft_load_img(&data);
        mlx_hook(data.win, 17, 0, ft_exit, &data);
        mlx_hook(data.win, 2, 0, ft_press_key, &data);
        mlx_loop_hook(data.mlx, game_update, &data); // Separar lógica y renderización
        mlx_loop(data.mlx);
    }
    return (0);
}
