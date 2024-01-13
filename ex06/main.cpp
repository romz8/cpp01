/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romainjobert <romainjobert@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 18:38:03 by romainjober       #+#    #+#             */
/*   Updated: 2024/01/13 16:14:52 by romainjober      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

int main(int argc, char *argv[]) 
{
    Harl harl;

    if (argc != 2)
    {
        std::cout << "this program takes one argument and one only" << std::endl;
        std::exit(EXIT_FAILURE);
    }
    harl.complain(argv[1]);
    return 0;
}