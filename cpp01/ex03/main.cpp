/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:18:16 by iantar            #+#    #+#             */
/*   Updated: 2023/11/10 11:28:12 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"
# include "HumanA.hpp"
# include "HumanB.hpp"

int main()
{
    {
        Weapon  club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        std::cout << std::endl;
        club.setType("some other type of club");
        bob.attack();
        std::cout << std::endl;
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);//here allm3allem
        jim.attack();
        std::cout << std::endl;
        club.setType("some other type of club");
        jim.attack();
        
    }
    return 0;
}
