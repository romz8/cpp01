/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjobert <rjobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:55:57 by rjobert           #+#    #+#             */
/*   Updated: 2024/01/11 18:34:03 by rjobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include "Weapon.h"

class Weapon
{
private:
	std::string	_type;

public:
	Weapon();
	Weapon(const std::string type);
	std::string&	getType();
	void	setType(const std::string& type);
};

#endif