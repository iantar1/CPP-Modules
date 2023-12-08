/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 11:14:11 by iantar            #+#    #+#             */
/*   Updated: 2023/12/08 15:32:59 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "WrongAnimal.hpp"
# define WRONGCAT "WrongCat"
# define WRONG_CAT_SOUND "whaaa haa"

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    ~WrongCat();
    WrongCat(const WrongCat&);
    WrongCat&    operator=(const WrongCat&);

    void    makeSound(void) const;
};
