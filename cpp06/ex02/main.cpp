/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 10:58:19 by iantar            #+#    #+#             */
/*   Updated: 2023/12/31 18:13:39 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include  "A.hpp"
# include  "B.hpp"
# include  "C.hpp"
# include "RealType.hpp"
# include <unistd.h>

void	test1()
{
	A   a;
	B   b;
	C   c;
	Base base;

	identify(&a);
	identify(&b);
	identify(&c);	
}

void	test2()
{
	Base*	ptr;

	for (int i = 0; i < 10; i++)
	{
		ptr = generate();
		identify(ptr);
		sleep(i % 2);
		delete ptr;
	}
}


void	test3()
{
	Base*	ptr;

	for (int i = 0; i < 10; i++)
	{
		ptr = generate();
		identify(*ptr);
		sleep(i % 2);
		delete ptr;
	}
}

int main(void)
{
	test3();
	return (EXIT_SUCCESS);
}
