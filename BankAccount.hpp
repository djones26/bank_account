#ifndef BANK_ACCOUNT_HPP
#define BANK_ACCOUNT_HPP
#include <iostream>
using namespace std;

class BankAccount
{
public:
    BankAccount(double balance_in,
                double annual_rate_in);
    virtual void deposit (double amount);
    virtual void withdraw (double amount);
    virtual void calcInt();
    virtual void monthlyProc();
    friend std::ostream &operator << (std::ostream&, const BankAccount&);
private:
    double balance;
    int num_deposits_month;
    int num_withdrawals_month;
    double annual_rate;
    double service_charge;
};
#endif
