/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:55:52 by iantar            #+#    #+#             */
/*   Updated: 2023/12/09 11:52:04 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "AbstractAnimal.hpp"
# include "Brain.hpp"

class Cat: public AbstractAnimal
{
private:
	Brain*	brain;

public:
	Cat();
	~Cat();
	Cat(const Cat&);
	Cat&	operator=(const Cat&);

   void		makeSound(void) const;
   Brain*	getBrain(void);
};
	