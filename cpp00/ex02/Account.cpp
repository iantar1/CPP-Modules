/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:27:16 by iantar            #+#    #+#             */
/*   Updated: 2023/11/01 14:42:01 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
# include <iostream>
# include <time.h>

int Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbWithdrawals;




int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);	
}

Account::Account(int initial_deposit)
{
	_totalAmount += initial_deposit;
	_accountIndex = _nbAccounts++;
	Account::_displayTimestamp();
	std::cout <<"index:" << _accountIndex << ";amount:" <<initial_deposit << ";created\n";
	_amount = initial_deposit;
}

Account::~Account(void)
{
	
}

void	Account::makeDeposit(int deposit)
{
	(void)deposit;
	//std::cout << ":makeDeposit\n";
	Account::_displayTimestamp();
	std::cout << "index:" <<_accountIndex/*<< ";p_amount:"<<*/ <<";mdeposit:" << deposit <<  ";amount:"<< _amount << ";nb_deposits:"<< _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	(void)withdrawal;
	//std::cout << "withdrawal:" << withdrawal << std::endl;
	return (true);
}

int		Account::checkAmount(void) const
{
	return (0);
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:"<< _accountIndex << ";amount:"<< _amount <<";deposits:0;withdrawals:0\n";
}

void	Account::displayAccountsInfos(void)
{
	std::cout << "\n";
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";total:"<< Account::getTotalAmount() << ";deposits:0;withdrawals:0\n\n";
}

void	Account::_displayTimestamp(void)
{

	time_t	timer;
	struct tm	*localTime;

	time(&timer);
	localTime = localtime(&timer);
	std::cout << "[" << localTime->tm_year + 1900;
	std::cout << localTime->tm_mon + 1;
	std::cout << localTime->tm_mday << "_";
	std::cout << localTime->tm_hour;
	std::cout << localTime->tm_min;
	std::cout << localTime->tm_sec << "]";
}
