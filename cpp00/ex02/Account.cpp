/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:27:16 by iantar            #+#    #+#             */
/*   Updated: 2023/08/07 12:37:10 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Account.hpp"

int	Account::getNbAccounts( void )
{
	std::cout << "getNbAccount\n";
	return (1);
}

int	Account::getTotalAmount( void )
{
	//std::cout << "getTotalAmount\n";
	return (0);
}

int	Account::getNbDeposits( void )
{
	return (0);
}

int	Account::getNbWithdrawals( void )
{
	std::cout << "getNbWithdrawals\n";
	return (0);
}

void	Account::displayAccountsInfos(void)
{
	// Account myAccount;
	Account::_displayTimestamp();
	std::cout << "account:8;total:"<< Account::getTotalAmount()<<";deposits:"<<Account::getNbDeposits()<<"\n";
	//std::cout << "displayAccountsInfos\n";
}




Account::Account(int initial_deposi)
{
	(void)initial_deposi;
	Account::_displayTimestamp();
	std::cout << " index:0;amount:42;created\n";
}

Account::~Account()
{
	Account _acount_[8];

	Account::_displayTimestamp();
	std::cout << " index:0;amount:42;closed\n";
	//std::cout << "~Account\n";
}




void	Account::makeDeposit(int deposit )
{
	(void)deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	withdrawal = 0;
	std::cout << "withdrawal:"<< withdrawal << std::endl;
	return (false);
}

int		Account::checkAmount( void ) const
{
	std::cout << "checkAmount\n";
	return (0);
}

void	Account::displayStatus() const
{
	//Account::_displayTimestamp();
	std::cout << "displayStatus\n";
}




void	Account::_displayTimestamp( void )
{
	std::chrono::system_clock::time_point currentTime = std::chrono::system_clock::now();
    std::time_t time = std::chrono::system_clock::to_time_t(currentTime);
    char buffer[80];
    std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", std::localtime(&time));
   	std::cout << buffer;
}