/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 10:23:11 by iantar            #+#    #+#             */
/*   Updated: 2024/01/12 21:06:27 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <algorithm>
# include <vector>
# include <map>
# include <deque>
# include <list>
# include <iostream>

template <typename T>

int easyfind(T container, const int toFind)
{
	typename T::iterator	iter;

	iter = std::find(container.begin(), container.end(), toFind);
	if (iter == container.end())
		throw std::runtime_error(" not found");
	return (std::distance(container.begin(), iter));
}
