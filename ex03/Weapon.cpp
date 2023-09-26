/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:22:25 by aherbet           #+#    #+#             */
/*   Updated: 2023/06/20 15:22:27 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) {
    this->_type = type;
    return;
}

Weapon::Weapon( void ) {
    return;
}

Weapon::~Weapon( void ) {
    return;
}

const std::string& Weapon::getType( void ) {
    return (this->_type);
}

void        Weapon::setType( std::string type ) {
    this->_type = type;
}
