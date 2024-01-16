/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:42:36 by iantar            #+#    #+#             */
/*   Updated: 2024/01/16 12:07:11 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <stack>
# include <cstdlib>
# include <sstream>

# define OPER "+-/*"
# define ADD 43
# define SUB 45
# define MUL 42
# define DIV 47
# define ZERO 48


class RPN
{
private:
    static std::stack<int>	myStack;
    static const std::string	operations;
    RPN();
public:
    static void	    ReversePolishNotation(const std::string&);
    static void	    checkError(const std::string&);
    static void     calculator(const std::string&);
    static int		doOperation(int, int, int);

    RPN(const RPN&);
    RPN& operator=(const RPN&);
    ~RPN();
};
