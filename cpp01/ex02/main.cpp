/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:04:52 by iantar            #+#    #+#             */
/*   Updated: 2023/11/08 13:18:13 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string     str("HI THIS IS BRAIN");
    std::string*    stringPTR = &str;
    std::string&    stringREF = str;

    std::cout << sizeof(std::string) << std::endl;
    std::cout << sizeof(stringPTR) << std::endl;
    
    std::cout << &str << std::endl;
    std::cout <<  stringPTR << std::endl;
    std::cout << &stringREF << std::endl;
    
    std::cout << str << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
    return (0);
}