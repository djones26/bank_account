#include "BankAccount.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

BankAccount::BankAccount(double balance_in,
        double annual_rate_in)
{
    annual_rate = annual_rate_in;
}

void BankAccount::deposit(double amount)
{
    balance += amount;
    num_deposits_month++;
}

void BankAccount::withdraw(double amount)
{
    balance -= amount;
    num_withdrawals_month++;
}

void BankAccount::calcInt()
{
    double monthly_rate = annual_rate / 12;
    double monthly_interest = balance * monthly_rate;
    balance += monthly_interest;
}

void BankAccount::monthlyProc()
{
    balance -= service_charge;
    calcInt();
    num_deposits_month = 0;
    num_withdrawals_month = 0;
    service_charge = 0;
}

ostream &operator << (ostream &os, const BankAccount& ba)
{
    os << "***Data for this month***\n";
    os << "Number of deposits: " << ba.num_deposits_month << endl;
    os << "Number of withdrawals: " << ba.num_withdrawals_month << endl;
    os << fixed << showpoint << setprecision(2);
    os << "Current balance: $" << ba.balance << endl;
    os << "Service charges: $" << ba.service_charge << endl;
    return os; 
}
