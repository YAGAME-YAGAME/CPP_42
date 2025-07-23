#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ):_accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0){

    _nbAccounts++;
    _totalAmount += _amount;

    std::cout<<"[NULL]"<<"index:"<<_nbAccounts - 1<<";amount"<<_amount<<";created"<<std::endl;
};

// Destructor
Account::~Account(void)
{
	std::cout <<"[NULL]"<< "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

