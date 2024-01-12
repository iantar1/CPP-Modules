/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 14:16:55 by iantar            #+#    #+#             */
/*   Updated: 2024/01/12 21:45:15 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

Span::Span() : N(0)
{
}

Span::Span(unsigned int n) : N(n)
{
}

Span::Span(const Span& sp)
{
	*this = sp;
}

Span&   Span::operator=(const Span& sp)
{
	if (this == &sp)
		return (*this);
	N = sp.N;
	vect = sp.vect;
	return (*this);
}

Span::~Span()
{
}

void	Span::addNumber(int num)
{
	if (vect.size() >= N)
		throw std::runtime_error("you can't add more number");
	vect.push_back(num);
}

int		Span::shortestSpan()
{
	int shSpan;
	int tmp;

	shSpan = INT_MAX;
	if (vect.size() < 2)
		throw std::runtime_error("there is no number");
	std::sort(vect.begin(), vect.end());
	tmp = vect[0];
	for (unsigned int i = 1; i < vect.size(); i++)
	{
		if (vect[i] - tmp < shSpan)
			shSpan = vect[i] - tmp;
		tmp = vect[i];
	}
	return (shSpan);
}

int		Span::longestSpan()
{
	if (vect.size() <= 1)
		throw std::runtime_error("there is no number");
	std::sort(vect.begin(), vect.end());
	return (vect[vect.size() - 1] - vect[0]);
}
