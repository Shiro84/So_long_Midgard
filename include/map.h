/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:42:56 by matomas           #+#    #+#             */
/*   Updated: 2024/11/27 15:43:05 by matomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

# include "so_long.h"

void parse_map(const char *file, t_info_map *data);
void ft_map_size(t_info_map *data);
void ft_check_map(t_info_map *data);
void ft_check_map_objects(t_info_map *data);

#endif
