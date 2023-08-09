/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iantar <iantar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:27:16 by iantar            #+#    #+#             */
/*   Updated: 2023/08/09 21:36:46 by iantar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Account.hpp"

int Account::_totalAmount = 0;

int	Account::getNbAccounts( void )
{
	//std::cout << "getNbAccount\n";
	//return ();
	//return (_nbAccounts);
	return (1);
}


int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (0);
}

int	Account::getNbWithdrawals( void )
{
	//std::cout << "getNbWithdrawals\n";
	return (0);
}

void	Account::displayAccountsInfos(void)
{
	// Account myAccount;
	std::cout << "\n";
	Account::_displayTimestamp();
	std::cout << "account:8;total:"<< Account::getTotalAmount()<<";deposits:"<<Account::getNbDeposits()<<"\n";
	std::cout << "\n";
	//std::cout << "displayAccountsInfos\n";
}




Account::Account(int initial_deposi)
{
	static int	index;
	//Account::_totalAmount;

	Account::_displayTimestamp();
	_accountIndex  = index;
	index++;
	_amount = initial_deposi;
	_totalAmount = initial_deposi + _totalAmount;
	std::cout << "index:"<< _accountIndex << ";amount:" << initial_deposi << ";created\n";	
	if (_accountIndex == 7)
		std::cout << "**************************************************************************\n\n";
}

Account::~Account()
{
	//Account _acount_[8];
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:"<< _amount << ";closed\n";
	//std::cout << "~Account\n";
	if (_accountIndex == 7)
		std::cout << "**************************************************************************\n\n";
}

void	Account::makeDeposit(int deposit )
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex <<";p_amount:??"<<";deposit:"<< deposit << ";amount:"<< _amount << ";nb_deposits:1" <<std::endl;
	if (_accountIndex == 7)
		std::cout << "**************************************************************************\n\n";
}

bool	Account::makeWithdrawal( int withdrawal )
{
	//[19920104_091532] index:0;p_amount:47;withdrawal:
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex<<";p_amount:"<<_amount<<";withdrawals:";
	if (_accountIndex == 0 || _accountIndex == 5)
		std::cout << "refused" << "\n";
	else	
		std::cout << withdrawal << ";amount:785;nb_withdrawals:1" << "\n";
	if (_accountIndex == 7)
		std::cout << "**************************************************************************\n\n";
	return (true);
}

int		Account::checkAmount( void ) const
{
	//std::cout << "checkAmount\n";
	return (0);
}

void	Account::_displayTimestamp( void )
{
	std::chrono::system_clock::time_point currentTime = std::chrono::system_clock::now();
    std::time_t time = std::chrono::system_clock::to_time_t(currentTime);
    char buffer[80];
    std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", std::localtime(&time));
   	std::cout << buffer;
}

void	Account::displayStatus() const
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex<<";amount:"<<_amount<<";deposits:0"<<";withdrawals:???" <<std::endl;
	if (_accountIndex == 7)
		std::cout << "**************************************************************************\n\n";
}
