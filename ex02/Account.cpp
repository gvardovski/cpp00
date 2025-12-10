/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 13:29:03 by svolkau           #+#    #+#             */
/*   Updated: 2025/12/10 14:54:58 by svolkau          ###   ########.fr       */
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
	this->_accountIndex = _nbAccounts++;
	this->_amount = initial_deposit;
	_totalAmount += initial_deposit;
	std::cout << "[20150406_153629] "
			  << "index:" << this->_accountIndex << ";"
			  << "amount:" << this->_amount << ";"
			  << "created" << std::endl;
}

void	_displayTimestamp()
{
	std::time_t t = std::time(nullptr);
	std::tm* time = std::localtime(&t);
	char buf[16];
	std::strftime(buf, sizeof(buf), "[%Y%m%d_%H%M%S] ", time);
	std::cout << buf;
}
Account::~Account(){}
