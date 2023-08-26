/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 15:28:27 by bsouhar           #+#    #+#             */
/*   Updated: 2023/08/27 00:03:58 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp(void) {
    time_t the_time = time(NULL);
    tm *ltm = localtime(&the_time);
    
    std::cout << "[" << 1900 + ltm->tm_year << ltm->tm_mon
            << ltm->tm_mday << "_"
             << ltm->tm_hour << ltm->tm_min << ltm->tm_sec
            << "] ";
}

Account::Account(int intial_deposit) {
    _displayTimestamp();
    _accountIndex = _nbAccounts;
    _amount = intial_deposit;
    _nbDeposits = _totalNbDeposits;
    _nbWithdrawals = _totalNbWithdrawals;
    _totalAmount += _amount;
    
    std::cout << "index:" << _accountIndex
              << ";amount:"<< _amount
              << ";created" << std::endl;
    _nbAccounts++;
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";amount:" << _amount
              << ";closed" << std::endl;
    _accountIndex++;
}

void Account::displayStatus(void) const {
    _displayTimestamp();
    std::cout << "index:" <<  _accountIndex
              << ";amount:" << _amount
              << ";deposits:" << _nbDeposits
              << ";withdrawals:" << _nbWithdrawals
              << std::endl;
}

void Account::makeDeposit(int deposit) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";p_amount:" << _amount
              << ";deposit:" << deposit;
    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    std::cout << ";amount:" << _amount
              << ";nb_deposits:" << _nbDeposits
              << std::endl;
}

bool Account::makeWithdrawal(int Withdrawal) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";p_amount:" << _amount
              << ";withdrawal:";
    if (_amount - Withdrawal >= 0)
    {
        _amount -= Withdrawal;
        _totalAmount -= Withdrawal;
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        std::cout << Withdrawal << ";amount:"
                  << _amount << ";nb_withdrawals:"
                  << _nbWithdrawals << std::endl;   
        return true;
    }
    else if ( _amount - Withdrawal < 0)
    {
        std::cout << "refused" << std::endl;
        return false;
    }
    return true;
}

int Account::checkAmount(void) const{
    return _amount;
}

int Account::getNbWithdrawals(void) {
    return _totalNbWithdrawals;
}

int Account::getNbDeposits(void) {
    return _totalNbDeposits;
}

int Account::getNbAccounts(void) {
    return _nbAccounts;
}

int Account::getTotalAmount(void) {
    return  _totalAmount;
}

void Account::displayAccountsInfos(void) {
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts
              << ";total:"   << _totalAmount
              << ";deposits:"<< _totalNbDeposits
              << ";withdrawals:" << _totalNbWithdrawals
              << std::endl;
}