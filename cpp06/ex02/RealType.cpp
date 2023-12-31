/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RealType.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 11:22:37 by iantar            #+#    #+#             */
/*   Updated: 2023/12/31 18:18:21 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RealType.hpp"

Base * generate(void)
{
	std::srand(static_cast<unsigned int>(std::time(NULL)));
	if (std::rand() % 3 == 0)
	{
		std::cout << "it generates A" << std::endl;
		return (new A());
	}
	else if (std::rand() % 3 == 1)
	{
		std::cout << "it generates B" << std::endl;
		return (new B());
	}
	std::cout << "it generates C" << std::endl;
	return (new C());
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "identifer: A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "identifer: B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "identifer: C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A&	a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "identifer: A" << std::endl;
	}
	catch(const std::exception& e)
	{
		//std::cerr << e.what() << std::endl;
	}
	try
	{
		B&	b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "identifer: B" << std::endl;
	}
	catch(const std::exception& e)
	{
		//std::cerr << e.what() << std::endl;
	}
	try
	{
		C&	c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "identifer: C" << std::endl;
	}
	catch(const std::exception& e)
	{
		//std::cerr << e.what() << std::endl;
	}
}
