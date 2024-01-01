/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 18:18:43 by iantar            #+#    #+#             */
/*   Updated: 2024/01/01 19:40:47 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iter.hpp"

int main(void)
{
	std::string	arrStr[6] = {"i", "s", "m", "a", "i", "l"};
	int	arrInt[4] = {2, 0, 0, 0};
	float	arrFloat[4] = {1.15, 2.18, 3.9, 0};
	::iter(arrStr, 4, fun<std::string>);
	::iter(arrStr, 4, fun<int>);
	::iter(arrStr, 4, fun<float>);
	return (EXIT_SUCCESS);
}