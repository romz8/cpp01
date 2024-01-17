/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjobert <rjobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 18:38:03 by romainjober       #+#    #+#             */
/*   Updated: 2024/01/15 18:14:53 by rjobert          ###   ########.fr       */
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
