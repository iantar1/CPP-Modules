/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 18:18:43 by iantar            #+#    #+#             */
/*   Updated: 2024/01/06 11:49:17 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iter.hpp"


int main(void)
{
	std::string	arrStr[4] = {"i", "s", "m", "a"};
	int	arrInt[4] = {2, 0, 0, 0};

	iter<int>(arrInt, 4, fun_iter);
	iter(arrStr, 4, fun_iter);
	iter<std::string>(arrStr, 4, fun_iter);
	return (EXIT_SUCCESS);
}
