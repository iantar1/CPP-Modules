/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 12:54:40 by iantar            #+#    #+#             */
/*   Updated: 2023/12/11 14:55:55 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria constructor\n";
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor\n";
}

AMateria::AMateria(std::string const & type): Type(type)
{
	
}

AMateria&	AMateria::operator=(AMateria&)
{
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (Type);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}