/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:18:27 by aherbet           #+#    #+#             */
/*   Updated: 2023/06/20 15:18:35 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//************************************************************//
//                       ZOMBIE CLASS                         //
//************************************************************//

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
    private:
        std::string _name;
    public:
        Zombie( std::string name );
        Zombie( void );
        ~Zombie( void );
        void        announce( void ) const;
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif
