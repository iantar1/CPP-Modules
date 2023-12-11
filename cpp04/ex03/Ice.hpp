/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 10:06:37 by iantar            #+#    #+#             */
/*   Updated: 2023/12/11 21:21:30 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "AMateria.hpp"

class Ice: public AMateria
{
private:
    /* data */
public:
    Ice();
    ~Ice();
    Ice(const Ice&);
    Ice&    operator=(const Ice&);

    AMateria*   clone() const;
    void use(ICharacter& target);
};
