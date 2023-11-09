/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:39:47 by iantar            #+#    #+#             */
/*   Updated: 2023/11/09 11:09:50 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

class Weapon
{
private:
    std::string type;

public:
    Weapon(std::string type_set);
    ~Weapon();
public:
    const std::string&   getType(void)  const;
    void    setType(std::string newType);
};

