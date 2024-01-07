/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 18:18:43 by iantar            #+#    #+#             */
/*   Updated: 2024/01/07 13:18:36 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iter.hpp"

// class Awesome
// {
//   public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; }
//   private:
//     int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
// {
//   o << rhs.get();
//   return o;
// }

// template< typename T >
// void print( T& x )
// {
//   std::cout << x << std::endl;
//   return;
// }

// int main() {
//   int tab[] = { 0, 1, 2, 3, 4 };
//   Awesome tab2[5];

//   iter( tab, 5, print<const int> );
//   iter( tab2, 5, print<Awesome> );

//   return 0;
// }


int main(void)
{
	std::string	arrStr[4] = {"i", "s", "m", "a"};
	int	arrInt[2] = {2, 0};
	float	arrFloat[3] = {1.25, 0.25, 158.26};

	iter(arrInt, 2, fun_iter<const int>);
	iter(arrStr, 4, fun_iter<std::string>);
	iter(arrFloat, 3, fun_iter<float>);
	return (EXIT_SUCCESS);
}
