/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_load.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:49:52 by matomas           #+#    #+#             */
/*   Updated: 2024/11/27 15:50:03 by matomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

// Esta función carga todas las líneas del archivo del mapa en la estructura `data->map`
void load_map_lines(int fd, t_info_map *data)
{
    char *line;
    int i;

    i = 0;
    line = get_next_line(fd);  // Leer la primera línea
    while (line != NULL)
    {
        data->map[i] = ft_strdup(line);  // Guardar la línea en el mapa
        free(line);  // Liberar la memoria de la línea leída
        i++;
        line = get_next_line(fd);  // Leer la siguiente línea
    }
    data->map[i] = NULL;  // Finalizar el arreglo de líneas
}

// Función principal que maneja la carga del mapa
void parse_map(const char *file, t_info_map *data)
{
    int fd;

    fd = open(file, O_RDONLY);  // Abrir el archivo del mapa
    if (fd < 0)
        ft_error_exit("Error: No se puede abrir el archivo del mapa");

    load_map_lines(fd, data);  // Cargar las líneas del mapa
    close(fd);  // Cerrar el archivo

    ft_map_size(data);  // Calcular el tamaño del mapa
    ft_check_map(data);  // Validar el mapa
    ft_check_map_objects(data);  // Verificar los objetos en el mapa
}
