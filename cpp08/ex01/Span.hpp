/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 14:17:02 by iantar            #+#    #+#             */
/*   Updated: 2024/01/09 16:16:10 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <set>
# include <vector>
# include <iostream>
# include <algorithm>
# include <list>


class Span
{
private:
//attributes
	unsigned int		N;
	unsigned int		cnt;
	bool				sorted;
	bool				modifed;
	int					ShortSpan;
	std::vector<int>	vect;

public:
//constractors, destructer, copy constructer , copy assignement
	Span();
	Span(unsigned int);
	Span(const Span&);
	Span&   operator=(const Span&);
	~Span();

//member function
	void	addNumber(int);
	int		shortestSpan();
	int		longestSpan();

//member function template

	template <typename T>
	void	addManyNumbers(T begin, T end)
	{
		while (begin != end)
		{
		addNumber(*begin);
		begin++;
		}
	}
};
