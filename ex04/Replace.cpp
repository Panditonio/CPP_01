/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoineherbet <antoineherbet@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:23:25 by aherbet           #+#    #+#             */
/*   Updated: 2023/07/01 00:10:05 by antoineherb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Sedsucks::Sedsucks( std::string file, std::string s1, std::string s2 ) {
    this->_iFile = file;
    this->_to_replace = s1;
    this->_replacement = s2;
    return;
}

Sedsucks::~Sedsucks( void ) {
    return;
}

bool    Sedsucks::replaceStr( void ) {
    std::ifstream   input;
    std::ofstream   output;    
    int             index;
    char            c;
    
    if (this->_iFile.compare("") == 0) {
        std::cout << "Error : empty filename !" << std::endl;
        return (false);
    }
    else if (this->_to_replace.compare("") == 0 || this->_replacement.compare("") == 0) {
        std::cout << "Error : strings cannot be empty !" << std::endl;
        return (false);
    }
    input.open(this->_iFile.c_str());
    if (input.is_open()) {
        if ((c = input.peek()) == EOF) {
            std::cout << "Error : empty file !" << std::endl;
            return (false);
        }
        else {
            this->_oFile = this->_iFile.append(".replace");            
            output.open(this->_oFile.c_str());
            if (output.is_open()) {
                while (std::getline(input, this->_tmp)) {
                    while ((index = this->_tmp.find(this->_to_replace)) != -1) {
                        this->_tmp.erase(index, this->_to_replace.length());
                        this->_tmp.insert(index, this->_replacement);
                    }
                    output << this->_tmp << std::endl;
                }
                input.close();
                output.close();
                std::cout << "Replacement done ! Export file created" << std::endl;
            }
            else {
                std::cout << "Error opening output file !" << std::endl;
                return (false);
            }    
        }
    }
    else
        std::cout << "Error opening input file !" << std::endl;
    return (true);
}
