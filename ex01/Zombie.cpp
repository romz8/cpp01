/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjobert <rjobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:00:41 by rjobert           #+#    #+#             */
/*   Updated: 2024/01/15 18:05:32 by rjobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::Zombie(std::string zname) : name(zname) {}

Zombie::Zombie(void) {}

Zombie::~Zombie(void)
{
	std::cout << "zombie named " << this->name << " has ben destroyed" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
//setter function for private member variable name used for exerices
void	Zombie::setName(std::string zname)
{
	this->name = zname;
}
