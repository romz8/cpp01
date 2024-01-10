/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjobert <rjobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:55:07 by rjobert           #+#    #+#             */
/*   Updated: 2024/01/10 16:27:08 by rjobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

//allocate, make speak and deallocate N zombies with exercice function
void	zombie_factory(int	n, std::string model)
{
	Zombie *z_pntr;
	
	std::cout << std::endl;
	std::cout << "\033[32mlet's create "<< n << " zombies, then make the 'speak' \033[0m" << std::endl;
	std::cout << std::endl;
	z_pntr = zombieHorde(n, model);
	for (int i = 0; i < n; i++)
		(z_pntr + i)->announce();
	std::cout << std::endl;
	std::cout << "\033[31mlet's now delete and clean mem alloc' \033[0m" << std::endl;
	std::cout << std::endl;
	delete[] z_pntr;
	std::cout << std::endl;
}

int	main(void)
{
	std::cout << "let' create 3 zombies to test" << std::endl;
	zombie_factory(3, "zomb_trio");
	std::cout << "let' do 42 of them to test robustness (and fun) " << std::endl;
	zombie_factory(42, "zomb_42");
	return (0);
}