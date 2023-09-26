/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:18:11 by aherbet           #+#    #+#             */
/*   Updated: 2023/06/20 15:18:19 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ) {
    this->_name = name;
    return;
}

Zombie::Zombie( void ) {
    return;
}

Zombie::~Zombie( void ) {
    std::cout << this->_name << " has been destroyed !" << std::endl;
    return;
}

void    Zombie::announce( void ) const {
    std::cout << this->_name << ": \"BraiiiiiiinnnzzzZ…\"" << std::endl;
    return;
}
