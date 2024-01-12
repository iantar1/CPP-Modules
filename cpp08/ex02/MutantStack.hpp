/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:08:41 by iantar            #+#    #+#             */
/*   Updated: 2024/01/12 11:49:01 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <stack>
# include <vector>
# include <iostream>
# include <cstdlib>
# include <iterator>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container >
{
public:
	MutantStack() {}
	~MutantStack() {}
	MutantStack(const MutantStack& other) : std::stack<T, Container >(other) {}
	MutantStack&	operator=(const MutantStack& rhs)
	{
		std::stack<T, Container >::operator=(rhs);
		return (*this);
	}

public:

	class iterator
	{
	private:
		typedef typename std::stack<T, Container >::container_type::iterator ConType;
		ConType	conIter;
	
	public:
		iterator(ConType _conTter_) : conIter(_conTter_){}
		iterator(iterator&) {}
		iterator(const iterator&) {}
		iterator& operator=(const iterator&) {}
		iterator operator++(int)
		{
			iterator	tmp;
		
			tmp = *this;
			++conIter;
			return (tmp);
		}
		iterator& operator++()
		{
			++conIter;
			return (*this);
		}
		iterator operator--(int)
		{
			iterator	tmp;
		
			tmp = *this;
			--conIter;
			return (tmp);
		}
		iterator& operator--()
		{
			--conIter;
			return (*this);
		}
		T&	operator*() const
		{
			return (*conIter);
		}
		bool	operator!=(const iterator& rhs) const
		{
			return (conIter != rhs.conIter);
		}
		~iterator() {}
		
	};

public:
	iterator	begin()
	{
		return (iterator(this->c.begin()));
	}
	iterator	end()
	{
		return (iterator(this->c.end()));
	}
};
