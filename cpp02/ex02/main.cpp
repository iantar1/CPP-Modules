/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:34:44 by iantar            #+#    #+#             */
/*   Updated: 2023/11/25 13:05:53 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"


int main(void)
{
    // Fixed a;//Default constructor called
    // Fixed const b( 10 );//Int constructor calle
    // Fixed const c( 42.42f );//Float constructor called
    // Fixed const d( b );//Copy constructor called
    // a = Fixed( 1234.4321f );

    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout <<"a: " << a << std::endl;
    std::cout << "b: "<< b << std::endl;
    std::cout << "max :"<< Fixed::max( a, b ) << std::endl;
    std::cout << "min:"<<Fixed::min( a, b ) << std::endl;
    // std::cout << "a= " << a << std::endl;
    // std::cout << "b= "<< b << std::endl;
    // std::cout << "a+b= " << a + b << std::endl;
    //  std::cout << "a-b= " << a - b << std::endl;
    //   std::cout << "a/b= " << a / b << std::endl;
    //    std::cout << "a*b= " << a * b << std::endl;
        //std::cout << "a+b= " << a + b << std::endl;
    // std::cout << "a is " << a << std::endl;
    // std::cout << "b is " << b << std::endl;
    // std::cout << "c is " << c << std::endl;
    // std::cout << "d is " << d << std::endl;
    // std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    // std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    // std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    // std::cout << "d is " << d.toInt() << " as integer" << std::endl;
   // (a > b) ? std::cout << "a > b" : std::cout << "a <= b";
    return 0;
}
