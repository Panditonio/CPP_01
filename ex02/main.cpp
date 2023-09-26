/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <aherbet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:20:45 by aherbet           #+#    #+#             */
/*   Updated: 2023/06/23 20:57:41 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main( void ) {
    std::string     string("HI THIS IS BRAIN !");
    std::string     *stringPTR = &string;
    std::string     &stringREF = string;
    
    std::cout << "STR is \"HI THIS IS BRAIN !\"" << std::endl;
    std::cout << "STR address is : " << &string << std::endl;
    std::cout << "PTR address is : " << stringPTR << std::endl;
    std::cout << "REF address is : " << &stringREF << std::endl;
    std::cout << "PTR string is : " << *stringPTR << std::endl;
    std::cout << "STR string is : " << stringREF << std::endl;
    return (0);
}
