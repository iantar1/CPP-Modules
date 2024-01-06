/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 19:52:20 by iantar            #+#    #+#             */
/*   Updated: 2024/01/06 11:43:12 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <cstdlib>


template <typename T>

void	fun_iter(T& a)
{
	std::cout << a << std::endl;
}

template <typename T>

void    iter(T* addr, size_t len, void (*fun)(T&))
{
    if (fun == NULL || addr == NULL)
        return ;
    for (size_t i = 0; i < len; i++)
    {
        fun(addr[i]);
    }
}
