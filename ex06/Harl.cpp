/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjobert <rjobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:01:30 by romainjober       #+#    #+#             */
/*   Updated: 2024/01/17 21:07:43 by rjobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

void    Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << DEBUG << std::endl;
    std::cout << std::endl;
}

void    Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << INFO << std::endl;
    std::cout << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << WARNING << std::endl;
    std::cout << std::endl;
}

void    Harl::error(void)
{
    std::cout << "[ ERROR ] " << std::endl;
    std::cout << ERROR << std::endl;
    std::cout << std::endl;
}

enum LogLevel {
    DEBUG_Lvl,
    INFO_Lvl,
    WARNING_Lvl,
    ERROR_Lvl,
    INVALID_Lvl
};

int input_filter(std::string level)
{
    std::string msg[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; ++i)
    {
        if (level == msg[i])
            return i;
    }
    return (-1);
}

void    Harl::complain(std::string level)
{
    int         index;
    
    index = input_filter(level);
    switch (index)
    {
        case 0:
            this->debug(); 
        case 1:
            this->info();
        case 2:
            this->warning();
        case 3:
            this->error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    return;
}
