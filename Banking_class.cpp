/*The Problem is: 
You are building a banking application and need to create a class called "Account" in C++. The
Account class should have attributes for account number, account holder name, and balance.
Implement member functions to:
1. Deposit funds into the account.
2. Withdraw funds from the account.
3. Get the current balance of the account.
Create an instance of the Account class with account number="123456", account holder
name="John Doe", and initial balance=1000. Perform a deposit of 500, followed by a withdrawal
of 200. Finally, retrieve the current balance and print the result.*/
#include<iostream>
#include<string>
using namespace std;
class Account
{
public:
    string account_number;
    string account_holder;
    double balance;
void deposite(double amount)
{
    balance+=amount;
    cout<<"Deposited: "<<amount<<endl;
}
void withdraw(double amount)
{
    if(amount>balance)
    {
        cout<<"Insufficient balance"<<endl;
    }
    else
    {
        balance-=amount;
        cout<<"Withdrawn: "<<amount<<endl;
    }
}
    double nbalance()
    {
        return balance;
    }
};
int main()
{
    Account myaccount;
    myaccount.account_number="123456";
    myaccount.account_holder="John Doe";
    myaccount.balance=1000;

    myaccount.deposite(500);
    myaccount.withdraw(200);
    cout<<"Current balance is ="<<myaccount.nbalance()<<endl;
    return 0;
}
