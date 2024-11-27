/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:53:47 by matomas           #+#    #+#             */
/*   Updated: 2024/11/27 15:53:58 by matomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_H
# define PLAYER_H

# include "so_long.h"

// Funciones del jugador
void init_player(t_info_map *data);
void move_player(int key, t_info_map *data);
void update_player_position(t_info_map *data);
void check_player_collect(t_info_map *data);

#endif
