/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <aherbet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:17:06 by aherbet           #+#    #+#             */
/*   Updated: 2023/06/23 20:06:28 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <cstdlib>
#include <string>

int main( void ) {
    std::string tmp;

    while (42) {
        while (!std::cin.eof()) {
            std::cout << "Which zombie do you wanna call, Ghost or Buster ?:" << std::endl;
            std::getline(std::cin, tmp);
            if (tmp.compare("Ghost") == 0) {
                Zombie *z = newZombie("Ghost");
                z->announce();
                delete z;
            }
            else if (tmp.compare("Buster") == 0) {
                randomChump("Buster");
            }
            else if (tmp.compare("None") == 0) {
                break;
            }
            else if (tmp.empty() == true)
                continue;
            else {
                std::cout << "Improper zombie name… try again !" << std::endl;
                std::cout << std::endl;
            }
        }
        return (EXIT_FAILURE);
    }
    return (0);
}
