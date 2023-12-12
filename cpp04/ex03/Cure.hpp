/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 10:06:44 by iantar            #+#    #+#             */
/*   Updated: 2023/12/12 09:20:57 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "AMateria.hpp"

class Cure: public AMateria
{
    
public:
    Cure();
    ~Cure();
    Cure(const Cure&);
    Cure&   operator=(const Cure&);
    
    AMateria* clone() const;
    void use(ICharacter& target);

};
