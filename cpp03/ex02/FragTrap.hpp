/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:03:59 by iantar            #+#    #+#             */
/*   Updated: 2023/11/28 16:50:53 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "ScavTrap.hpp"

class FragTrap: public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string);
    ~FragTrap();

    void highFivesGuys(void);
};

