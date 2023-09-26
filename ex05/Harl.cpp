/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:24:13 by aherbet           #+#    #+#             */
/*   Updated: 2023/06/20 15:24:15 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{
    std::cout << "Harley Quinn is in the house !" << std:: endl;
}

Harl::~Harl()
{
    std::cout << "Harley Quinn is dead…" << std:: endl;
}

void    Harl::_debug( void ) {
    std::cout << BLACK << "[DEBUG] : " << RESET;
    std::cout << "\"It's the end of the world ! Have a drink";
    std::cout << " with us.\nSweetie, get mommy's bazooka !\"" << std::endl;
    std::cout << std::endl;
}

void    Harl::_info( void ) {
    std::cout << GREEN << "[INFO] : " << RESET;
    std::cout << "\"The joke's on you : I'm not even a real blonde !\n";
    std::cout << "Maybe I can sneak you some shampoo ?\"" << std::endl;
    std::cout << std::endl;
}

void    Harl::_warning( void ) {
    std::cout << YELLOW << "[WARNING] : " << RESET;
    std::cout << "\"How rude !\nI'm rubber, you're glue : whatever you say";
    std::cout << " bounces off me\nand makes a six-inch-diameter";
    std::cout << " exit wound in you !\"" << std::endl;
    std::cout << std::endl;
}

void    Harl::_error( void ) {
    std::cout << RED << "[ERROR] : " << RESET;
    std::cout << "\"Love your perfume. What is that, the scent";
    std::cout << " of Death ?\nMamma's gonna paint the streets";
    std::cout << " in blood…\"" << std::endl;
    std::cout << std::endl;
}

void    Harl::complain( std::string level ) {
    void        (Harl::*complain_ptr[4])( void ) = {
                &Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error
    };
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++) {
        if (levels[i] == level){
            (this->*complain_ptr[i])();
            break;
        }
    }
}
