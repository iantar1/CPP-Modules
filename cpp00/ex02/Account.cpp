/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:27:16 by iantar            #+#    #+#             */
/*   Updated: 2023/10/30 13:12:30 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
# include <iostream>

Account::Account( int initial_deposit )
{
	std::cout << initial_deposit << "\n";
}

Account::~Account(void)
{
	
}

void	Account::makeDeposit(int deposit)
{
	(void)deposit;
	//std::cout << "deposit:" << deposit << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	(void)withdrawal;
	//std::cout << "withdrawal:" << withdrawal << std::endl;
	return (true);
}

int		Account::checkAmount( void ) const
{
	return (0);
}

void	Account::displayStatus( void ) const
{
	//
}

void	Account::displayAccountsInfos(void)
{
	
}