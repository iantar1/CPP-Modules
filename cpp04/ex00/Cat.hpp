/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:55:52 by iantar            #+#    #+#             */
/*   Updated: 2023/12/08 15:21:50 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "Animal.hpp"



class Cat: public Animal
{

public:
    Cat(/* args */);
    ~Cat();
    Cat(const Cat&);
    Cat&    operator=(const Cat&);

   void                 makeSound(void) const;
};

