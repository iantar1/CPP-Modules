/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:42:34 by iantar            #+#    #+#             */
/*   Updated: 2024/01/16 15:20:13 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RPN.hpp"

std::stack<int> RPN::myStack;
const std::string RPN::operations = "+-/*";

RPN::RPN() {}

RPN::RPN(const RPN&) {}

RPN& RPN::operator=(const RPN&)
{
	return (*this);
}

void RPN::checkError(const std::string& str)
{
	std::string			word;
	std::stringstream	tmp(str);

	while (tmp>>word)
	{
		if (word.size() != 1)
			throw std::runtime_error("error");
		if (operations.find(word) == std::string::npos && !isdigit(static_cast<int>(word[0])))
			throw std::runtime_error("error");
	}
}
int RPN::doOperation(int a, int b, int opr)
{
	switch (opr)
	{
	case ADD:
		return (a + b);
		break;
	case SUB:
		return (a - b);
		break;
	case MUL:
		return (a * b);
		break;
	default:
		if (b == 0)
			throw std::runtime_error("error");
		break;
	}
	return (a / b);
}

void RPN::calculator(const std::string& str)
{
	std::string			word;
	std::stringstream	tmp(str);
	int					num[2];

	while (tmp >> word)
	{
		if (isdigit(word[0]))
			myStack.push(static_cast<int>(word[0]) - ZERO);
		else if (myStack.size() > 1)
		{
			num[0] = myStack.top();
			myStack.pop();
			num[1] = myStack.top();
			myStack.pop();
			myStack.push(doOperation(num[1], num[0], static_cast<int>(word[0])));
		}
		else
			throw std::runtime_error("error");
	}
}

void RPN::ReversePolishNotation(const std::string& str)
{
	std::string			word;
	std::stringstream	tmp(str);

	try
	{
		checkError(str);
		calculator(str);
		std::cout << myStack.top() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}	
}

RPN::~RPN() {}