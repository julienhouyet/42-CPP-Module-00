/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:39:44 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/03 18:44:24 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	this->_accountIndex = this->_nbAccounts;
	this->_nbAccounts++;
	this->_totalAmount += this->_amount;
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amout:" << this->_amount << ";created" << std::endl;
}

Account::~Account(void)
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amout:" << this->_amount << ";closed" << std::endl;
	this->_nbAccounts--;
}

void Account::_displayTimestamp(void)
{
	time_t now = time(0);
	tm *ltm = localtime(&now);
	std::cout 
		<< "[" 
		<< 1900 + ltm->tm_year
		<< std::setw(2) << std::setfill('0') << ltm->tm_mon
		<< std::setw(2) << std::setfill('0') << ltm->tm_mday
		<< "_"
		<< std::setw(2) << std::setfill('0') << ltm->tm_hour
		<< std::setw(2) << std::setfill('0') << ltm->tm_min
		<< std::setw(2) << std::setfill('0') << ltm->tm_sec
		<< "] ";
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
	_displayTimestamp();
    std::cout 
		<< "accounts:" << _nbAccounts 
		<< ";total:" << _totalAmount 
		<< ";deposits:" << _totalNbDeposits 
		<< ";withdrawals:" << _totalNbWithdrawals
	<< std::endl;
	return ;
}

void Account::makeDeposit(int deposit)
{
	this->_displayTimestamp();
	this->_totalAmount += deposit;
	this->_nbDeposits++;
	this->_totalNbDeposits++;
    std::cout 
		<< "index:" << this->_accountIndex 
		<< ";p_amount:" << this->_amount 
		<< ";deposit:" << deposit 
		<< ";amount:" << this->_amount + deposit
		<< ";nb_deposits:" << this->_nbDeposits 
	<< std::endl;
	this->_amount += deposit;
	return ;
}

bool Account::makeWithdrawal(int withdrawal)
{
	this->_displayTimestamp();
    std::cout 
		<< "index:" << this->_accountIndex 
		<< ";p_amount:" << this->_amount;
	if (withdrawal > this->_amount)
	{
		std::cout 
			<< ";withdrawal:refused"
			<< std::endl;
		return false;
	}
	else
	{
		this->_nbWithdrawals++;
		this->_totalNbWithdrawals++;
		std::cout 
			<< ";withdrawal:" << withdrawal
			<< ";amount:" << this->_amount - withdrawal
			<< ";nb_withdrawals:" << this->_nbWithdrawals
			<< std::endl;
		this->_totalAmount -= withdrawal;
		this->_amount -= withdrawal;
	}
	return true;
}

int Account::checkAmount(void) const
{
    return 1;
}


void Account::displayStatus(void) const
{
	this->_displayTimestamp();
    std::cout 
		<< "index:" << _accountIndex 
		<< ";amount:" << _amount 
		<< ";deposits:" << _nbDeposits 
		<< ";withdrawals:" << _nbWithdrawals
	<< std::endl;
	return ;
}