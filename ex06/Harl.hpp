/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:25:10 by aherbet           #+#    #+#             */
/*   Updated: 2023/06/20 15:25:12 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//************************************************************//
//                        HARL CLASS                          //
//************************************************************//

#ifndef HARL_HPP
#define HARL_HPP

#define RESET   "\033[0m"
#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"

#include <iostream>
#include <string>

class Harl
{
    private:
        std::string _level;
        void        _debug( void );
        void        _info( void );
        void        _warning( void );
        void        _error( void );
    public:
        Harl( std::string level );
        ~Harl();
        void    complain( std::string level );
        int    level_eval( void );
        void	h_switch( Harl &harley );
};

#endif
