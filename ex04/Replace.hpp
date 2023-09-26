/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherbet <aherbet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:23:33 by aherbet           #+#    #+#             */
/*   Updated: 2023/06/26 20:53:26 by aherbet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//************************************************************//
//                      SEDSUCKS CLASS                        //
//************************************************************//

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>

class   Sedsucks 
{
    private:
        std::string     _iFile;
        std::string     _oFile;
        std::string     _tmp;
        std::string     _to_replace;
        std::string     _replacement;
    public:
        Sedsucks( std::string file, std::string s1, std::string s2 );
        ~Sedsucks( void );
        bool        replaceStr( void );
};

#endif
