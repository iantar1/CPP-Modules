/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RealType.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 11:22:37 by iantar            #+#    #+#             */
/*   Updated: 2024/01/04 15:58:55 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RealType.hpp"

Base * generate(void)
{
	int	randNum;

	std::srand(static_cast<unsigned int>(std::time(NULL)));
	randNum = std::rand() % 3;
	switch (randNum)
	{
	case 0:
		std::cout << "it generates A" << std::endl;
		return (new A());
	case 1:
		std::cout << "it generates B" << std::endl;
		return (new B());
	default:
		std::cout << "it generates C" << std::endl;
		return (new C());
	}
	return (NULL);
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
		try
		{
			B&	b = dynamic_cast<B&>(p);
			(void)b;
			std::cout << "identifer: B" << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				C&	c = dynamic_cast<C&>(p);
				(void)c;
				std::cout << "identifer: C" << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
		}
	}	
}
