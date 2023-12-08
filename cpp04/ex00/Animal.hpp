/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:55:57 by iantar            #+#    #+#             */
/*   Updated: 2023/12/08 15:15:10 by iantar           ###   ########.fr       */
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

class Animal
{
protected:
    std::string type;

public:
    Animal();
    virtual ~Animal();
    Animal(const Animal&);
    Animal& operator=(const Animal&);
    
    virtual void    makeSound(void) const;
    const std::string&  getType(void) const;
};
