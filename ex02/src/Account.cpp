/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:39:44 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/03 16:51:42 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(0), _nbDeposits(0), _nbWithdrawals(0)
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	std::cout << "index:" << _accountIndex << ";amout:" << _totalAmount << ";created\n";
	// [20240603_150850] index:0;amount:42;created
}

Account::~Account()
{
}

void Account::_displayTimestamp(void)
{
	return ;
}

int	Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return _totalAmount;
}

int	Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos( void )
{
	return ;
}

void Account::makeDeposit(int deposit)
{
	deposit = 1;
	deposit = deposit + 1;
	return ;
}

bool Account::makeWithdrawal(int withdrawal)
{
	withdrawal = 1;
	withdrawal = withdrawal + 1;
    return 1;
}

int Account::checkAmount(void) const
{
    return 1;
}


void Account::displayStatus(void) const
{
	return ;
}