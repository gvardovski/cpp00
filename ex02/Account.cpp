/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 13:29:03 by svolkau           #+#    #+#             */
/*   Updated: 2025/12/11 13:02:56 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit){
	this->_accountIndex = Account::_nbAccounts++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" 
			  << "amount:" << Account::checkAmount() << ";" 
			  << "created" << std::endl;
}

void Account::_displayTimestamp(void)
{
	std::time_t t = std::time(NULL);
	std::tm* time = std::localtime(&t);
	char buf[32];
	std::strftime(buf, sizeof(buf), "[%Y%m%d_%H%M%S] ", time);
	std::cout << buf;
}

int	Account::getNbAccounts( void ){
	return Account::_nbAccounts;
}

int	Account::getTotalAmount( void ){
	return Account::_totalAmount;
}

int	Account::getNbDeposits( void ){
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void ){
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void){
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";" 
			  << "total:" << Account::getTotalAmount() << ";" 
			  << "deposits:" << Account::getNbDeposits() << ";" 
			  << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::displayStatus( void ) const{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" 
			  << "amount:" << Account::checkAmount() << ";" 
			  << "deposits:" << this->_nbDeposits << ";" 
			  << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

int		Account::checkAmount( void ) const{
	return this->_amount;
}

void	Account::makeDeposit( int deposit ){
	int p_ammount;
	p_ammount = Account::checkAmount();
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" 
			  << "p_amount:" << p_ammount << ";"
			  << "deposit:" << deposit << ";" 
			  << "amount:" << Account::checkAmount() << ";"
			  << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ){
	int p_ammount;
	p_ammount = Account::checkAmount();
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" 
			  << "p_amount:" << p_ammount << ";";
	if (Account::checkAmount() - withdrawal < 0){
		std::cout << "withdrawal:refused" << std::endl;
		return false;
	}
	else
	{
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		std::cout << "withdrawal:" << withdrawal << ";" 
				  << "amount:" << Account::checkAmount() << ";"
				  << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return true;
	}
}

Account::~Account(){
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" 
			  << "amount:" << this->_amount << ";" 
			  << "closed" << std::endl;
}
