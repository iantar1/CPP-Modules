/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:55:49 by iantar            #+#    #+#             */
/*   Updated: 2023/12/08 15:19:42 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "Animal.hpp"


class Dog: public Animal
{

public:
    Dog(/* args */);
    ~Dog();
    Dog(const Dog&);
    Dog&    operator=(const Dog&);

    void    makeSound(void) const;
};
