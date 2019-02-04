#ifndef SAVINGS_ACCOUNT_HPP
#define SAVINGS_ACCOUNT_HPP
#include <iostream>
using namespace std;

class SavingsAccount : public BankAccount
{
    public:
        SavingsAccount(double balance_in,
                       double annual_rate_in);
        deposit(double amount); 
        withdraw(double amount);
        monthlyProc();
    private:
        bool status;
}
