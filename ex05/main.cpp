/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjobert <rjobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 18:38:03 by romainjober       #+#    #+#             */
/*   Updated: 2024/01/15 18:13:51 by rjobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

int main() {
    Harl harl;

    // Test with valid levels
    std::cout << "Testing valid levels:" << std::endl;
    std::cout << "[DEBUG]" << std::endl;
    harl.complain("DEBUG");
    std::cout << std::endl;

    std::cout << "[INFO]" << std::endl;
    harl.complain("INFO");
    std::cout << std::endl;

    std::cout << "[WARNING]" << std::endl;
    harl.complain("WARNING");
    std::cout << std::endl;

    std::cout << "[ERROR]" << std::endl;
    harl.complain("ERROR");
    std::cout << std::endl;

    // Test with invalid levels
    std::cout << "Testing invalid levels:" << std::endl;
    std::cout << "[VERBOSE]" << std::endl;
    harl.complain("VERBOSE"); // Invalid level
    std::cout << std::endl;

    std::cout << "[SILENT]" << std::endl;
    harl.complain("SILENT"); // Invalid level
    std::cout << std::endl;

    std::cout << "[TRACE]" << std::endl;
    harl.complain("TRACE"); // Invalid level
    std::cout << std::endl;

    return 0;
}
