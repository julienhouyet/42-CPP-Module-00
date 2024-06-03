/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:39:44 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/03 18:37:19 by jhouyet          ###   ########.fr       */
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
	// [19920104_091532] accounts:8;total:12442;deposits:8;withdrawals:6
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
	// [19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
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
	// [19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
	this->_displayTimestamp();
	this->_nbWithdrawals++;
	this->_totalNbWithdrawals++;
    std::cout 
		<< "index:" << this->_accountIndex 
		<< ";p_amount:" << this->_amount;
	if (withdrawal > this->_amount)
	{
		std::cout 
			<< ";withdrawal:refused"
			<< std::endl;
	}
	else
	{
		std::cout 
			<< ";withdrawal:" << withdrawal
			<< ";amount:" << this->_amount - withdrawal
			<< ";nb_withdrawals:" << this->_nbWithdrawals
			<< std::endl;
	}
	if (withdrawal < this->_amount)
		this->_totalAmount -= withdrawal;
		this->_amount -= withdrawal;
	return true;
}

int Account::checkAmount(void) const
{
    return 1;
}


void Account::displayStatus(void) const
{
	// [19920104_091532] index:0;amount:47;deposits:1;withdrawals:0std::cout 
		std::cout 
			<< "TEST"
			<< std::endl;
	return ;
}