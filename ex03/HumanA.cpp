/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:21:25 by aherbet           #+#    #+#             */
/*   Updated: 2023/06/20 15:21:28 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ): _name(name), _weapon(weapon) {
    std::cout << this->_name << " created with " << weapon.getType() << std::endl;
    return;
}

HumanA::~HumanA( void ) {
    std::cout << this->_name << " destroyed !" << std::endl;
    return;
}

void    HumanA::attack( void ) {
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
    return;
}

void    HumanA::setWeapon( Weapon weapon ) {
    this->_weapon = weapon;
    return;
}
