/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <aherbet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:23:04 by aherbet           #+#    #+#             */
/*   Updated: 2023/06/27 15:00:14 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include <fstream>
#include <iostream>
#include <string>

void    syntax( void ) {
    std::cout << "Invalid input...\nSyntax is : ./replace ";
    std::cout << "<file_name> <to_replace> <replacement>" << std::endl;
}

int main( int argc, char **argv ) {
    if (argc != 4) {
        syntax();
        return (1);
    }
    else {
        Sedsucks    newRep( argv[1], argv[2], argv[3] );
        newRep.replaceStr();
    }
    return (0);
}
