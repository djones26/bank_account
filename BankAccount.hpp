#ifndef BANK_ACCOUNT_HPP
#define BANK_ACCOUNT_HPP
class BankAccount
{
public:
    BankAccount(double balance_in,
                double annual_rate_in);
    virtual void deposit (double amount);
    virtual void withdraw (double amount);
    virtual void calcInt();
    virtual void monthlyProc();
private:
    double balance;
    int num_deposits_month;
    int num_withdrawals_month;
    double annual_rate;
    double service_charge;
};
#endif
