/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:03:59 by iantar            #+#    #+#             */
/*   Updated: 2023/12/03 15:17:35 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "ScavTrap.hpp"

class FragTrap: virtual public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string&);
    ~FragTrap();
    FragTrap(const FragTrap&);
    FragTrap&   operator=(const FragTrap&);

    void highFivesGuys(void);
};

