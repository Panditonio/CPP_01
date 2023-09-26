/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <aherbet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:18:58 by aherbet           #+#    #+#             */
/*   Updated: 2023/06/23 20:06:53 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <cstdlib>
#include <string>

int main( void ) {
    int size;

    while (42) {
        while (!std::cin.eof()) {
            std::cout << "What size shall your horde be, my Lord ?:" << std::endl;
            std::cin >> size;
            if (size > 0 && size < 101) {
                Zombie *horde = zombieHorde(size, "Knut");
                for (int i = 0; i < size; i++)    
                    horde[i].announce();
                delete [] horde;
                continue;
            }
            else if (size < 0 || size > 100) {
                std::cout << "Incorrect horde size… choose between 1 - 100 !" << std::endl;
                std::cout << std::endl;
                continue;
            }
            else {
                std::cout << "Incorrect input… horde mode terminated !" << std::endl;
                break;
            }
        }
        return (EXIT_FAILURE);
    }
    return (0);
}
