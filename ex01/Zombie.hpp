/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjobert <rjobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:55:26 by rjobert           #+#    #+#             */
/*   Updated: 2024/01/15 18:04:52 by rjobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include "Zombie.h"

class	Zombie
{
private:
	std::string	name;

public:
	Zombie();
	~Zombie();
	Zombie(std::string zname); 
	void	setName(std::string zname);
	void	announce(void);	
};

#endif
