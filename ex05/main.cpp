/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <aherbet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:24:29 by aherbet           #+#    #+#             */
/*   Updated: 2023/06/27 15:01:17 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <cstdlib>


static void     intro(void) {
    std::cout << "Welcome to Harl ! A test of Harley Quinn's sanity…" << std::endl;
    std::cout << "Please select one of the following moods : " << std::endl;
    std::cout << "DEBUG, INFO, WARNING, ERROR or DEATH" <<std::endl;
    std::cout << std::endl;
}

int     main(void) {
    intro();
    Harl        harley;
    std::string input;

    while (42) {
        while (!std::cin.eof()) {
            std::cout << "Please enter a mood : ";
            std::cout << std::endl;
            std::getline(std::cin, input, '\n');
            if (input.compare("DEBUG") == 0) {
                std::cout << BLACK << "[HARLEY] " << RESET;
                harley.complain("DEBUG");
            }
            else if (input.compare("INFO") == 0) {
                std::cout << BLACK << "[HARLEY] " << RESET;
                harley.complain("INFO");
            }
            else if (input.compare("WARNING") == 0) {
                std::cout << BLACK << "[HARLEY] " << RESET;
                harley.complain("WARNING");
            }
            else if (input.compare("ERROR") == 0) {
                std::cout << BLACK << "[HARLEY] " << RESET;
                harley.complain("ERROR");
            }
            else if (input.compare("DEATH") == 0) {
                std::cout << BLACK << "[UNDEAD HARLEY] : " << RESET;
                std::cout << "You really put the \"fun\" in \"funeral\" !" << std::endl;
                std::cout << std::endl;
                break;
            }
            else if (input.empty() == true)
                continue;
            else {
                std::cout << std::endl;
                std::cout << "This mood does not exist…" << std::endl;
                std::cout << "Please use DEBUG, INFO, WARNING, ERROR or DEATH" << std::endl;
                std::cout << std::endl;
            }
        }
        return (EXIT_FAILURE);
    }
    return (0);
}
