/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:27:16 by iantar            #+#    #+#             */
/*   Updated: 2023/08/06 20:18:33 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Account.hpp"

Account::Account(int initial_deposi)
{
	initial_deposi = 0;
}

Account::~Account()
{
	
}

void	Account::_displayTimestamp( void )
{
	std::chrono::system_clock::time_point currentTime = std::chrono::system_clock::now();
    std::time_t time = std::chrono::system_clock::to_time_t(currentTime);
    char buffer[80];
    std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", std::localtime(&time));
    std::cout << buffer;
}

void	Account::makeDeposit(int deposit )
{
	(void)deposit;
	//std::cout << "deposit:"<< deposit << "\n";
}

bool	Account::makeWithdrawal( int withdrawal )
{
	(void)withdrawal;
	std::cout << "withdrawal:"<< withdrawal << std::endl;
	return (false);
}

void	Account::displayAccountsInfos(void)
{
	// Account myAccount;
	
	Account::_displayTimestamp();
	//Account::makeWithdrawal(0);
	std::cout << " index displayAccountsInfos\n";
}

void	Account::displayStatus() const
{
	Account::_displayTimestamp();
	std::cout << " index\n";
}
