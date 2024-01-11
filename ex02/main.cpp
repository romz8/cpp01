/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjobert <rjobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 20:24:30 by rjobert           #+#    #+#             */
/*   Updated: 2024/01/10 20:41:49 by rjobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string var = "HI THIS IS BRAIN";
	
	std::string	*stringPTR = &var;
	std::string& stringREF = var;
	
	std::cout << "question part I" << std::endl;
	std::cout << "**********************************************" << std::endl;
	std::cout << "The memory address of the string variable is: " << &var << std::endl;
	std::cout << "The memory address s held by stringPTR is: " << stringPTR << std::endl;
	std::cout << "The memory address s held by stringREF is: " << &stringREF << std::endl;
	std::cout << "**********************************************" << std::endl;
	std::cout << "question part II" << std::endl;
	std::cout << "**********************************************" << std::endl;
	std::cout << "The value of the string variable is: " << var << std::endl;
	std::cout << "The value pointed to by stringPTR is: " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF is: " << stringREF << std::endl;
	std::cout << "**********************************************" << std::endl;
	
	return (0);
}