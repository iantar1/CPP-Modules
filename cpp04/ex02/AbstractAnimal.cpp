/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AbstractAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:56:00 by iantar            #+#    #+#             */
/*   Updated: 2023/12/09 10:10:34 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AbstractAnimal.hpp"

AbstractAnimal::AbstractAnimal()
{
	type = "AbstractAnimal";
	std::cout << "AbstractAnimal's default constructor colled" << std::endl;
}

AbstractAnimal::AbstractAnimal(const AbstractAnimal& other)
{
	*this = other;
}

AbstractAnimal&	AbstractAnimal::operator=(const AbstractAnimal& rhs)
{
	std::cout << "AbstractAnimal's copy assingement operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	return (*this);
}

AbstractAnimal::~AbstractAnimal()
{
	std::cout << "AbstractAnimal's destructor colled" << std::endl;
}

const std::string&  AbstractAnimal::getType(void) const
{
	return (type);	
}
