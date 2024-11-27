/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:52:28 by matomas           #+#    #+#             */
/*   Updated: 2024/11/27 15:52:38 by matomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "libft.h"
# include "get_next_line.h"  // Incluir el encabezado de get_next_line

// Definición de las estructuras del mapa y del juego
typedef struct s_info_map
{
    void    *mlx;
    void    *win;
    char    **map;
    int     width;
    int     height;
    int     step;
    int     player;
    int     count;
    char    *txt;
}               t_info_map;

// Funciones de manejo del mapa
void parse_map(const char *file, t_info_map *data);
void load_map_lines(int fd, t_info_map *data);
void ft_map_size(t_info_map *data);
void ft_check_map(t_info_map *data);
void ft_check_map_objects(t_info_map *data);

// Funciones de errores
void ft_error_exit(const char *msg);  // Función que imprime el error y termina el juego

#endif
