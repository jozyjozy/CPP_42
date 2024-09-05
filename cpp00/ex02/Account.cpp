/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarue <jlarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 12:26:11 by jlarue            #+#    #+#             */
/*   Updated: 2023/07/04 13:44:04 by jlarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*librairies utilisees*/
#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

/*creation et initialisation de variables*/
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

/*CREATOR*/
Account::Account(int i) {
    _accountIndex = _nbAccounts;
    _nbAccounts = _nbAccounts + 1;
    _amount = i;
    _totalAmount += _amount;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    this->_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout <<  "created" << std::endl;
}

/*DESTRUCTOR*/
Account::~Account(void) {
    _nbAccounts--;
    this->_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "closed" << std::endl;
}

/*ACCESSOR*/
int Account::getNbAccounts(void)
{
    return _nbAccounts;
}

int Account::getTotalAmount(void)
{
    return _totalAmount;
}

int Account::getNbDeposits(void)
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
    return _totalNbWithdrawals;
}

int     Account::checkAmount(void) const
{
    return _amount;
}

/*Display the time of now the same format as the log file*/
void Account::_displayTimestamp(){
    std::time_t result = std::time(NULL);

   				std::cout << std::setfill('0') << "[" << 1900 + std::localtime(&result)->tm_year;
                std::cout << std::setfill('0') << std::setw(2) << 1 + std::localtime(&result)->tm_mon;
                std::cout << std::setfill('0') << std::setw(2) << std::localtime(&result)->tm_mday;
                std::cout <<  "_";
                std::cout << std::setfill('0') << std::setw(2) << std::localtime(&result)->tm_hour;
                std::cout << std::setfill('0') << std::setw(2) << std::localtime(&result)->tm_min;
                std::cout << std::setfill('0') << std::setw(2) << std::localtime(&result)->tm_sec;
                std::cout << "] " << std::flush;
}

/*Display all the accounts info*/
void    Account::displayAccountsInfos(void) {
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";";
    std::cout << "total:" << getTotalAmount() << ";";
    std::cout << "deposits:" << getNbDeposits() << ";";
    std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

/*Mutator : Add a deposit by changing the value of the nbdepo & amount*/
void    Account::makeDeposit(int deposit) {
    this->_displayTimestamp();
    _nbDeposits++;
    _totalNbDeposits++;
    _totalAmount += deposit;
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";" << std::flush;
    _amount += deposit;
    std::cout << "deposit:" << deposit << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

/*Mutator : Add a withdrawal by changing the value of the nbdepo & amount*/
bool    Account::makeWithdrawal(int withdrawal) {
    this->_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    std::cout << "withdrawal:" << std::flush;
    if (withdrawal > checkAmount())
	{
        std::cout << "refused" << std::endl;
        return false;
    }
    std::cout << withdrawal << ";" << std::flush;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    _totalAmount -= withdrawal;
    _amount -= withdrawal;
    std::cout << "amount:" << _amount << ";";
    std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
    return true;
}

/*Display an account info*/
void    Account::displayStatus(void) const {
    this->_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout <<"amount:" << _amount << ";";
    std::cout <<"deposits:" << _nbDeposits << ";";
    std::cout <<"withdrawals:" << _nbWithdrawals << std::endl;
}
