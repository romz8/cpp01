/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romainjobert <romainjobert@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:01:30 by romainjober       #+#    #+#             */
/*   Updated: 2024/01/13 16:30:50 by romainjober      ###   ########.fr       */
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
    // if (level == "DEBUG")
    //     return DEBUG_Lvl;
    // else if (level == "INFO")
    //     return INFO_Lvl;
    // else if (level == "WARNING")
    //     return WARNING_Lvl;
    // else if (level == "ERROR")
    //     return ERROR_Lvl;
    // else
    //     return INVALID_Lvl;
}

void    Harl::complain(std::string level)
{
    int         index;
    
    index = input_filter(level);
    switch (index)
    {
        case 0:
            this->debug();
            index++;
        case 1:
            this->info();
            index++;
        case 2:
            this->warning();
            index++;
        case 3:
            this->error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    return;
}