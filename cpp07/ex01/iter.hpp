/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 19:52:20 by iantar            #+#    #+#             */
/*   Updated: 2024/01/07 10:52:03 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <cstdlib>


template <typename U>

void	fun_iter(U& a)
{
	std::cout << a << " ";
}

template <typename T, typename U>

void    iter(T* addr, size_t len, void (*fun)(U&))
{
    if (fun == NULL || addr == NULL)
        return ;
    for (size_t i = 0; i < len; i++)
    {
        fun(addr[i]);
    }
}
