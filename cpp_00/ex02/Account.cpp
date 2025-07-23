#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ):_accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0){

    _nbAccounts++;
    _totalAmount += _amount;
    _displayTimestamp();
    std::cout<<"index:"<<_nbAccounts - 1<<";amount:"<<_amount<<";created"<<std::endl;
};

// Destructor
Account::~Account(void)
{
    _displayTimestamp();
	std::cout<< "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void Account::_displayTimestamp()
{
    std::time_t now = std::time(nullptr);
    std::tm *current_time = std::localtime(&now);

    std::cout<<"["<<current_time->tm_year + 1900
             <<current_time->tm_mon + 1
             <<current_time->tm_mday<<"_"
             <<current_time->tm_hour
             <<current_time->tm_min
             <<current_time->tm_sec
             <<"] ";
}

int Account::getNbAccounts(){return _nbAccounts;};
int Account::getTotalAmount(){return _totalAmount;}
int Account::getNbDeposits(){return _totalNbDeposits;}
int Account::getNbWithdrawals(){return _totalNbWithdrawals;}


//[19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
void Account::displayAccountsInfos(){
    _displayTimestamp();
    std::cout<<"accounts:"<<getNbAccounts()
             <<";total:"<<getTotalAmount()
             <<";depoits:"<<getNbDeposits()
             <<";withdrawas:"<<getNbWithdrawals()
             <<std::endl;
};

void  Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount 
			  << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;

};

//[19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
void Account::makeDeposit(int deposit)
{
    _nbDeposits++;
    _totalAmount+= deposit;
    _totalNbDeposits++;
    _displayTimestamp();
    std::cout<<"index:"<<_accountIndex
            <<";p_amout:"<<_amount 
            <<";deposit:"<<deposit
            <<";amount;"<<_amount + deposit
            <<";nb_deposits:"<<_nbDeposits
            <<std::endl;

    _amount+= deposit;
}


//index:0;p_amount:47;withdrawal:refused
//index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout<<"index:"<<_accountIndex <<";p_amount"<<_amount<<";withdrawal:";
    if(_amount >= withdrawal)
    {
        _amount -= withdrawal;
        _nbWithdrawals++;
        _totalAmount -= withdrawal;
        _totalNbWithdrawals++;
        std::cout<<withdrawal<<";amount:"<<_amount<<";nb_withdrawals:"<<_nbWithdrawals
                <<std::endl;
        return true;
    }
    else{
        std::cout<<"refused"<<std::endl;
        return false;
    }
}

int Account::checkAmount(void) const {return _amount;};


