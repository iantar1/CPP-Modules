/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 12:54:40 by iantar            #+#    #+#             */
/*   Updated: 2023/12/11 21:10:25 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"

AMateria::AMateria()
{

}

AMateria::~AMateria()
{
	
}

AMateria::AMateria(const AMateria&)
{

}

AMateria::AMateria(std::string const & type): Type(type)
{	
}

AMateria&	AMateria::operator=(const AMateria&)
{
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (Type);
}

void AMateria::use(ICharacter&)
{

}