/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:21:42 by aherbet           #+#    #+#             */
/*   Updated: 2023/06/20 15:21:45 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ): _name(name), _weapon(NULL) {
    std::cout << this->_name << " created with no weapon" << std::endl;
    return;
}

HumanB::~HumanB( void ) {
    std::cout << this->_name << " destroyed !" << std::endl;
    return;
}

void    HumanB::attack( void ) {
    std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
    return;
}

void    HumanB::setWeapon( Weapon &weapon ) {
    this->_weapon = &weapon;
    return;
}
