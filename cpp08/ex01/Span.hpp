/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 14:17:02 by iantar            #+#    #+#             */
/*   Updated: 2024/01/12 21:45:28 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <set>
# include <vector>
# include <iostream>
# include <algorithm>
# include <list>
# include <climits>


class Span
{
private:
//attributes
	unsigned int		N;
	std::vector<int>	vect;

// constructor
	Span();

public:
//constractors, destructer, copy constructer , copy assignement
	Span(unsigned int);
	Span(const Span&);
	Span&   operator=(const Span&);
	~Span();

//member function
	void	addNumber(int);
	int		shortestSpan();
	int		longestSpan();

//member function template

	template <typename IterType>
	void	addManyNumbers(IterType begin, IterType end)
	{
		while (begin != end)
		{
			addNumber(*begin);
			begin++;
		}
	}
};
