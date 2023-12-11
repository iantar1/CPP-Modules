/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 12:55:02 by iantar            #+#    #+#             */
/*   Updated: 2023/12/11 21:10:30 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include "ICharacter.hpp"

//AMateria&   operator=(AMateria&);

class	ICharacter;

class AMateria
{
protected:
	std::string	Type;

public:
	AMateria();
	virtual ~AMateria();
	AMateria(std::string const & type);
	AMateria&	operator=(const AMateria&);
    AMateria(const AMateria&);

	std::string const & getType() const;
	virtual void use(ICharacter& target);

	virtual AMateria* clone() const = 0;
};
