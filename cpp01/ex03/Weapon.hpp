/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:39:47 by iantar            #+#    #+#             */
/*   Updated: 2023/11/17 21:17:44 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include <iostream>

class Weapon
{
private:
	std::string type;

public:
	Weapon(std::string type_set);

public:
	const std::string&	getType(void)  const;
	void				setType(std::string newType);
};

