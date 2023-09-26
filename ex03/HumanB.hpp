/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:21:51 by aherbet           #+#    #+#             */
/*   Updated: 2023/06/20 15:21:53 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//************************************************************//
//                       HUMAN B CLASS                        //
//************************************************************//

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB
{
    private:
        std::string _name;
        Weapon      *_weapon;
    public:
        HumanB( std::string name );
        ~HumanB( void );
        void    attack( void );
        void    setWeapon( Weapon &weapon );
};


#endif
