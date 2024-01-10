/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjobert <rjobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:58:20 by rjobert           #+#    #+#             */
/*   Updated: 2024/01/10 15:57:39 by rjobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <cctype>
# include <iostream>
# include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void	randomChump( std::string name );
Zombie* zombieHorde( int N, std::string name );

#endif
