/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjobert <rjobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:39:19 by rjobert           #+#    #+#             */
/*   Updated: 2024/01/10 14:02:26 by rjobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int	main(void)
{
	std::cout << "let's create a zombie on the heap that should survive until delete" << std::endl;

	Zombie *z_heap = newZombie("heap_zombie");
	z_heap->announce();
	std::cout << "let's create a zombie on the stack, he/she should announce";
	std::cout << " and die because won't survive the function scope" << std::endl << std::endl;
	randomChump("stack_zombie");
	std::cout << "let's now prove that heap_zombie is still alive and outscoped its";
	std::cout << " calling function (we call delete mem alloc) " << std::endl << std::endl;
	delete z_heap;
	return(0);	
}