/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:08:41 by iantar            #+#    #+#             */
/*   Updated: 2024/01/11 12:56:04 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <stack>
# include <iostream>
# include <cstdlib>
# include <iterator>

template <typename T>

class MutantStack : public std::stack<T>
{
public:

	class iterator
	{
	private:
		typedef typename std::stack<T>::container_type::iterator ConType;
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
		T&	operator*()
		{
			return (*conIter);
		}
		bool	operator!=(const iterator& rhs)
		{
			return (conIter != rhs.conIter);
		}
		~iterator() {}
		
	};

//typename  iterator::ConType iter;

public:
	iterator	begin()
	{
		return (iterator(this->c.begin()));
	}
	iterator	end()
	{
		return (iterator(this->c.end()));
	}
	//iterator
};
