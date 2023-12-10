/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:55:49 by iantar            #+#    #+#             */
/*   Updated: 2023/12/09 11:52:10 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "AbstractAnimal.hpp"
# include "Brain.hpp"

class Dog: public AbstractAnimal
{
private:
	Brain*	brain;

public:
    Dog();
    ~Dog();
    Dog(const Dog&);
    Dog&    operator=(const Dog&);

    void    makeSound(void) const;
    Brain*	getBrain(void);
    
};
