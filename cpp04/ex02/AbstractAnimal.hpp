/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AbstractAnimal.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:55:57 by iantar            #+#    #+#             */
/*   Updated: 2023/12/09 11:50:31 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <cstdlib>
# define DOG_SOUND "bark bark..!"
# define DOG "Dog"

# define CAT_SOUND "Miow Miow..!"
# define CAT "Cat"

# define ANIMAL "shalom shalom..!"

class AbstractAnimal
{
protected:
    std::string type;
    AbstractAnimal();

public:
    virtual ~AbstractAnimal();
    AbstractAnimal(const AbstractAnimal&);
    AbstractAnimal& operator=(const AbstractAnimal&);
    
    virtual void    makeSound(void) const = 0;
    const std::string&  getType(void) const;
};
