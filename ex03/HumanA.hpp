/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjobert <rjobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:12:37 by rjobert           #+#    #+#             */
/*   Updated: 2024/01/15 18:10:03 by rjobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "HumanA.h"

class	HumanA
{
private:
	Weapon&		_weapon;
	std::string	_name;

public:
	HumanA(const std::string& name, Weapon& weapon);
	void	attack();
};

#endif
