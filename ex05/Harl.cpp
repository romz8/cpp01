/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romainjobert <romainjobert@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:01:30 by romainjober       #+#    #+#             */
/*   Updated: 2024/01/12 18:37:45 by romainjober      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

void    Harl::debug(void)
{
    std::cout << "DEBUG: " << std::endl;
    std::cout << DEBUG << std::endl;
}

void    Harl::info(void)
{
    std::cout << "INFO: " << std::endl;
    std::cout << INFO << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "WARNING: " << std::endl;
    std::cout << WARNING << std::endl;
}

void    Harl::error(void)
{
    std::cout << "ERROR: " << std::endl;
    std::cout << ERROR << std::endl;
}

void    Harl::complain(std::string level)
{
    std::string msg[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void(Harl::*func[4])() =  {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (int i = 0; i < 4; ++i)
    {
        if (msg[i] == level)
            (this->*func[i])();
    }
    return;
}