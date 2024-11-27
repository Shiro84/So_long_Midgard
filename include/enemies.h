/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemies.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:30:20 by matomas           #+#    #+#             */
/*   Updated: 2024/11/27 16:30:30 by matomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMIES_H
# define ENEMIES_H

# include "so_long.h"

// Funciones de enemigos
void init_enemies(t_info_map *data);
void move_enemies(t_info_map *data);

#endif
