/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RealType.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 11:22:37 by iantar            #+#    #+#             */
/*   Updated: 2023/12/29 17:50:54 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RealType.hpp"

Base * generate(void)
{
	std::srand(static_cast<unsigned int>(std::time(NULL)));
	if (std::rand() % 3 == 0)
		return (new A());
	else if (std::rand() % 3 == 1)
		return (new B());
	return (new C());
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	(void)p;
}