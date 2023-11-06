/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:27:16 by iantar            #+#    #+#             */
/*   Updated: 2023/11/06 11:27:49 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
# include <iostream>
# include <time.h>

int Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;


int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts();
	std::cout << ";total:"<< getTotalAmount();
	std::cout << ";deposits:"<< getNbDeposits();
	std::cout <<";withdrawals:"<< getNbWithdrawals()
	<< std::endl;
}

Account::Account(int initial_deposit)
{
	_totalAmount += initial_deposit;
	_accountIndex = _nbAccounts++;
	Account::_displayTimestamp();
	std::cout <<"index:" << _accountIndex
	<< ";amount:" << initial_deposit << ";created\n";
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout <<"index:" << _accountIndex
	<< ";amount:" << _amount << ";closed\n";
}

void	Account::makeDeposit(int deposit)
{
	_nbDeposits++;
	_totalNbDeposits++;
	_amount += deposit;
	_totalAmount += deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:";
	std::cout << _amount - deposit <<";deposit:" << deposit;
	std::cout <<  ";amount:" << _amount << ";nb_deposits:"
	<< _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:"
	<< _amount << ";withdrawal:";
	if (_amount < withdrawal)
	{
		std::cout << "refused\n";
		return (false);
	}
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_amount -=  withdrawal;
	_totalAmount -= withdrawal;
	std::cout << withdrawal <<";amount:" << _amount
	<< ";nb_withdrawals:" << _nbWithdrawals
	<< std::endl;
	return (true);
}

int		Account::checkAmount(void) const
{
	return (_amount);
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:"<< _accountIndex << ";amount:";
	std::cout << _amount <<";deposits:"<< _nbDeposits
	<<";withdrawals:"<< _nbWithdrawals
	<< std::endl;
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
	std::cout << localTime->tm_sec << "] ";
}
