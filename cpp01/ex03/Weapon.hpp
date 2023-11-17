/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:39:47 by iantar            #+#    #+#             */
/*   Updated: 2023/11/16 17:31:05 by iantar           ###   ########.fr       */
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
	~Weapon();
public:
	const std::string&	getType(void)  const;
	void				setType(std::string newType);
};

