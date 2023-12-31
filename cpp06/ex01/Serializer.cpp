/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 18:20:59 by iantar            #+#    #+#             */
/*   Updated: 2023/12/29 10:41:59 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Serializer.hpp"

Serializer::Serializer()// : data.x(1337), data.str("1337")
{
    // data.x = 1337; 
    // data.str = "1337";
}

Serializer::~Serializer()
{
}

Serializer::Serializer(const Serializer&)
{
    // this->data.str = other.data.str;
    // this->data.x = other.data.x;
}
Serializer& Serializer::operator=(const Serializer&)
{
    return (*this);
}

uintptr_t	Serializer::serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}
