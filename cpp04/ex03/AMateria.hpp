/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 12:55:02 by iantar            #+#    #+#             */
/*   Updated: 2023/12/10 14:51:11 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include "ICharacter.hpp"

//AMateria&   operator=(AMateria&);

class AMateria
{
protected:
	std::string	type;
public:
	AMateria();
	~AMateria();
	AMateria(std::string const & type);
	AMateria&	operator=(AMateria&);

	std::string const & getType() const; //Returns the materia type
	virtual void use(ICharacter& target);
	virtual AMateria* clone() const = 0;
};
