/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_parse.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:50:41 by matomas           #+#    #+#             */
/*   Updated: 2024/11/27 15:50:54 by matomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"
#include <stdio.h>
#include <stdlib.h>

// Función que valida el tamaño del mapa (el mapa debe ser rectangular)
void ft_map_size(t_info_map *data)
{
    int i;
    int len;

    len = ft_strlen(data->map[0]);
    i = 1;
    while (data->map[i] != NULL)
    {
        if (ft_strlen(data->map[i]) != len)
            ft_error_exit("Error: El mapa no es rectangular");
        i++;
    }
}

// Función que valida los caracteres en el mapa (debe contener solo los caracteres válidos)
void ft_check_map(t_info_map *data)
{
    int i;
    int j;

    i = 0;
    while (data->map[i] != NULL)
    {
        j = 0;
        while (data->map[i][j] != '\0')
        {
            if (data->map[i][j] != '1' && data->map[i][j] != '0' && 
                data->map[i][j] != 'P' && data->map[i][j] != 'E' && 
                data->map[i][j] != 'C')
                ft_error_exit("Error: El mapa contiene caracteres no válidos");
            j++;
        }
        i++;
    }
}

// Función que valida que el mapa tenga al menos un jugador, una salida y una colección
void ft_check_map_objects(t_info_map *data)
{
    int i;
    int j;
    int player;
    int exit;
    int collect;

    player = 0;
    exit = 0;
    collect = 0;
    i = 0;
    while (data->map[i] != NULL)
    {
        j = 0;
        while (data->map[i][j] != '\0')
        {
            if (data->map[i][j] == 'P')
                player++;
            if (data->map[i][j] == 'E')
                exit++;
            if (data->map[i][j] == 'C')
                collect++;
            j++;
        }
        i++;
    }
    if (player == 0 || exit == 0 || collect == 0)
        ft_error_exit("Error: El mapa debe contener al menos un jugador, una salida y un coleccionable");
}
