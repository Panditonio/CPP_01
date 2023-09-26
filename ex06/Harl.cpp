/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:25:00 by aherbet           #+#    #+#             */
/*   Updated: 2023/06/20 15:25:04 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( std::string level )
{
    this->_level = level;
    std::cout << "Harley Quinn is in the house !";
    std::cout << " And she is in " << this->_level << " mode…" << std:: endl;
    std::cout << std::endl;
    return;
}

Harl::~Harl()
{
    std::cout << "Harley Quinn left the house !" << std:: endl;
    return;
}

void    Harl::_debug( void ) {
    std::cout << BLACK << "[DEBUG] : " << RESET;
    std::cout << "\"It's the end of the world !\nHave a drink";
    std::cout << " with us.\nSweetie, get mommy's bazooka !\"" << std::endl;
    std::cout << std::endl;
    return;
}

void    Harl::_info( void ) {
    std::cout << GREEN << "[INFO] : " << RESET;
    std::cout << "\"The joke's on you : I'm not even a real blonde !\n";
    std::cout << "Maybe I can sneak you some shampoo ?\"" << std::endl;
    std::cout << std::endl;
    return;
}

void    Harl::_warning( void ) {
    std::cout << YELLOW << "[WARNING] : " << RESET;
    std::cout << "\"How rude !\nI'm rubber, you're glue : whatever you say";
    std::cout << " bounces off me\nand makes a six-inch-diameter";
    std::cout << " exit wound in you !\"" << std::endl;
    std::cout << std::endl;
    return;
}

void    Harl::_error( void ) {
    std::cout << RED << "[ERROR] : " << RESET;
    std::cout << "\"Love your perfume. What is that, the scent";
    std::cout << " of Death ?\nMamma's gonna paint the streets";
    std::cout << " in blood…\"" << std::endl;
    std::cout << std::endl;
    return;
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

int    Harl::level_eval( void ) {
    std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	if (this->_level.compare("") == 0) {
        std::cout << std::endl;
        std::cout << "Duuh bro… I refuse to be silenced !" << std::endl;
        return (-1);
    }
    for (int i = 0; i < 4; i++)
		if (levels[i] == this->_level)
			return (i);
	return (-1);
}

void	Harl::h_switch( Harl &harley ) {
    switch (level_eval())
	{
		case 0:
			harley.complain("DEBUG");
		case 1:
			harley.complain("INFO");
		case 2:
			harley.complain("WARNING");
		case 3:
			harley.complain("ERROR");
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
    return;
}
