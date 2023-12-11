/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 10:06:37 by iantar            #+#    #+#             */
/*   Updated: 2023/12/11 11:18:28 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"

class Ice: public AMateria
{
private:
    /* data */
public:
    Ice(/* args */);
    ~Ice();
    Ice(Ice&);
    Ice&    operator=(Ice&);

    AMateria*   clone() const;
    void use(ICharacter& target);
};
