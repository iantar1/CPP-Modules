/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 10:30:56 by iantar            #+#    #+#             */
/*   Updated: 2024/01/04 11:08:23 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Serializer.hpp"

int	main(void)
{
	Data	data;
	uintptr_t	raw;

	data.str = "1337";
	data.x = 1337;
	std::cout << "data addr: " << &data << std::endl;
	std::cout << "my data: data.x = " << data.x << ", data.str = " << data.str << std::endl;
 	raw = Serializer::serialize(&data);
	std::cout << "afetr serialization: " << raw << std::endl;
	std::cout << "deserialize what I serialized: " << Serializer::deserialize(raw) << std::endl;
	std::cout << "my data again: data.x = " << data.x << ", data.str = " << data.str << std::endl;
	return (EXIT_SUCCESS);
}
