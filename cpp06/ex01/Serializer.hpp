/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 18:21:03 by iantar            #+#    #+#             */
/*   Updated: 2023/12/29 11:08:36 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <cstdlib>

typedef unsigned long int	uintptr_t;

typedef struct s_Data
{
	int			x;
	std::string	str;
}Data;

class Serializer
{
private:
	// typedef struct s_Data
	// {
	// 	int			x;
	// 	std::string	str;
	// }Data;

public:
	Serializer();
	~Serializer();
	Serializer(const Serializer&);
	Serializer& operator=(const Serializer&);

	static	uintptr_t	serialize(Data* ptr);
	static	Data*		deserialize(uintptr_t raw);
};
