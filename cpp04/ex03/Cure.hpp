/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 10:06:44 by iantar            #+#    #+#             */
/*   Updated: 2023/12/10 14:54:52 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "AMateria.hpp"

class Cure: public AMateria
{
private:
    /* data */
public:
    Cure();
    ~Cure();
    Cure(Cure&);
    Cure&   operator=(Cure&);
    
    AMateria* clone() const;
    void use(ICharacter& target) override;
};

