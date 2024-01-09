/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 14:16:55 by iantar            #+#    #+#             */
/*   Updated: 2024/01/09 16:16:21 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

Span::Span() : N(0), cnt(0), sorted(false), modifed(true), ShortSpan(0)
{
}

Span::Span(unsigned int n) : N(n), cnt(0), sorted(false), modifed(true), ShortSpan(0)
{
}

Span::Span(const Span& sp)// : N(sp.N), cnt(sp.cnt), sorted(sp.sorted), modifed(sp.modifed), ShortSpan(sp.ShortSpan), vect(sp.vect)
{
	*this = sp;
}

Span&   Span::operator=(const Span& sp)
{
	if (this == &sp)
		return (*this);
	N = sp.N;
	cnt = sp.cnt;
	sorted = sp.sorted;
	modifed = sp.modifed;
	ShortSpan = sp.ShortSpan;
	vect = sp.vect;
	return (*this);
}

Span::~Span()
{
}

void	Span::addNumber(int num)
{
	if (cnt >= N)
		throw std::runtime_error("you can't add more number");
	vect.push_back(num);
	sorted = false;
	cnt++;
}

int		Span::shortestSpan()
{
	int shSpan;
	int tmp;

	shSpan = 1e9;
	if (modifed == false)
		return (ShortSpan);
	if (cnt <= 1)
		throw std::runtime_error("there is no number");
	if (sorted == false)
	{
		std::sort(vect.begin(), vect.end());
		sorted = true;
	}
	tmp = vect[0];
	for (unsigned int i = 1; i < cnt; i++)
	{
		if (vect[i] - tmp < shSpan)
			shSpan = vect[i] - tmp;
		tmp = vect[i];
	}
	ShortSpan = shSpan;
	modifed = false;
	return (shSpan);
}

int		Span::longestSpan()
{
	if (cnt <= 1)
		throw std::runtime_error("there is no number");
	if (sorted == false)
	{
		std::sort(vect.begin(), vect.end());
		sorted = true;
	}
	return (vect[cnt - 1] - vect[0]);
}
