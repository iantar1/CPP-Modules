/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 20:50:58 by iantar            #+#    #+#             */
/*   Updated: 2024/01/02 10:45:06 by iantar           ###   ########.fr       */
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
// class outOfRangeExeption : public std::exception
// {
//     const char* what() const throw ()
//     {
//         return ("out of range");
//     }
// };

private:
    T*  array;
    size_t len;
public:
    Array();
    Array(unsigned int);
    Array(const Array&);
    Array&  operator=(const Array&);
    ~Array();

    T&  operator[](unsigned int);
    const T&  operator[](unsigned int) const;
    
    size_t size(void) const;
};

template <typename T>

size_t Array<T>::size(void) const
{
    return (len);
}

template <typename T>


T&  Array<T>::operator[](unsigned int index)
{
    if (static_cast<int>(index) < 0 || index >= len)
        throw std::out_of_range("Index out of range");
    return (this->array[index]);
}

template <typename T>

const T&  Array<T>::operator[](unsigned int index) const
{
    if (static_cast<int>(index) < 0 || index >= len)
        throw std::out_of_range("Index out of range");
    return (this->array[index]);
}

template <typename T>

Array<T>::Array(const Array<T>& other) : array(NULL)
{
    *this = other;
}

template <typename T>

Array<T>&  Array<T>::operator=(const Array<T>& rhs)
{
    if (this == &rhs)
        return (*this);
    delete[] array;
    array = NULL;
    len = rhs.len;
    if (rhs.array == NULL)
        return (*this);
    array = new T[rhs.len];
    for (size_t i = 0; i < rhs.len; i++)
        array[i] = rhs.array[i];
    return (*this);
}

template <typename T>

Array<T>::Array(unsigned int n)
{
    len = static_cast<int>(n) > 0 ? n : 0;
    array = static_cast<int>(n) > 0 ? new T[n] : NULL;
}

template <typename T>

Array<T>::Array() : array(NULL), len(0)
{
}
template <typename T>

Array<T>::~Array()
{
    delete[] array;
}
