#include "BankAccount.hpp"
#include <iostream>
using namespace std;

int main()
{
    BankAccount my_account (5000, .05);

    cout << my_account;

    return 0;
}
