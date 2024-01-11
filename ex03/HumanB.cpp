/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjobert <rjobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:12:16 by rjobert           #+#    #+#             */
/*   Updated: 2024/01/11 19:14:53 by rjobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

HumanB::HumanB(std::string name) : _weapon(NULL), _name(name)
{
	this->is_armed = false;
}
void	HumanB::attack(void)
{
	if (this->is_armed == 1)
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
			std::cout << this->_name << " has no weapon, cannot attack " << std::endl;
}

void	HumanB::setWeapon(Weapon& type)
{
	this->_weapon = &type;
	this->is_armed = true;
}