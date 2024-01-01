/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 20:50:58 by iantar            #+#    #+#             */
/*   Updated: 2024/01/01 21:35:16 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <cstdlib>
# include <ctime>

template <typename T>

class Array
{
private:
class outOfRangeExeption : public std::exception
{
    const char* what() const throw ()
    {
        return ("out of range");
    }
};

private:
    T*  array;
    unsigned    int len;
public:
    Array();
    Array(unsigned int);
    Array(const Array&);
    Array&  operator=(const Array&);
    ~Array();

    T&  operator[](unsigned int);

    unsigned int size(void) const;
};

template <typename T>

unsigned int Array<T>::size(void) const
{
    return (len);
}

template <typename T>

T&  Array<T>::operator[](unsigned int index)
{
    if (static_cast<int>(index) < 0 || index >= len)
        throw outOfRangeExeption();//std::out_of_range("Index out of range");
    return (this->array[index]);
}
template <typename T>

Array<T>::Array(const Array<T>& other)
{
    len = other.len;
    array = other.array;
}

template <typename T>

Array<T>&  Array<T>::operator=(const Array<T>& rhs)
{
    len = rhs.len;
    array = rhs.array;
    return (*this);
}

template <typename T>

Array<T>::Array(unsigned int n) : len(n)
{
    array = new T[n];
}

template <typename T>

Array<T>::Array()
{
}
template <typename T>

Array<T>::~Array()
{
}
