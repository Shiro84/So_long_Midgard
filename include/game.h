/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:33:05 by matomas           #+#    #+#             */
/*   Updated: 2024/11/27 16:33:16 by matomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_H
# define GAME_H

# include "so_long.h"

// Funciones del juego
void game_loop(t_info_map *data);  // Bucle principal del juego
void game_exit(t_info_map *data);  // Manejo de cierre del juego

#endif
