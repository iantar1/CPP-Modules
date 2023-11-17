/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:43:52 by iantar            #+#    #+#             */
/*   Updated: 2023/11/17 18:40:52 by iantar           ###   ########.fr       */
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
    void complain( std::string level );
};
