/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:06:35 by iantar            #+#    #+#             */
/*   Updated: 2023/11/14 10:22:33 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once


# include <iostream>
# include <cstdlib>

class Harl
{
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
public:
    Harl(/* args */);
    ~Harl();
public:
    void complain( std::string level );
};
