/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjobert <rjobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:12:37 by rjobert           #+#    #+#             */
/*   Updated: 2024/01/15 18:09:54 by rjobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "HumanB.h"

class	HumanB
{
private:
	Weapon*		_weapon;
	std::string	_name;
	bool		is_armed;

public:
	HumanB(std::string name);
	void	attack();
	void	setWeapon(Weapon &type);
};

#endif
