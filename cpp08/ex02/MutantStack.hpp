/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:08:41 by iantar            #+#    #+#             */
/*   Updated: 2024/01/13 13:17:22 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <stack>
# include <vector>
# include <list>
# include <iostream>
# include <cstdlib>
# include <iterator>

template <typename T, typename UnderCont = std::deque<T> >
class MutantStack : public std::stack<T, UnderCont >
{
public:
	typedef typename UnderCont::iterator 		iterator;

public:
	MutantStack() {}
	MutantStack(const MutantStack&) {}
	MutantStack&	operator=(const MutantStack&) { return (*this);}
	~MutantStack() {}

	iterator	begin()
	{
		return (this->c.begin());
	}
	iterator	end()
	{
		return (this->c.end());
	}
};
