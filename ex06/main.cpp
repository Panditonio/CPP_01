/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:25:19 by aherbet           #+#    #+#             */
/*   Updated: 2023/06/20 15:25:21 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


void    syntax( void ) {
    std::cout << "Invalid input…" << std::endl;
    std::cout << std::endl;
    std::cout << "For proper complaints syntax is : ./HarlFilter <complaint_level>\n";
    std::cout << "<complaint_level> is either DEBUG, INFO, WARNING or ERROR" << std::endl;
    std::cout << std::endl;
}

int     main( int argc, char **argv ) {
    if (argc != 2) {
        syntax();
        return (1);
    }
    
    Harl        harley( argv[1] );
    
    if (argc == 2)
        harley.h_switch( harley );
    return (0);
}
