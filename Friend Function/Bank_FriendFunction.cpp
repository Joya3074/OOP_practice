/*In Bank X there are many customer. Each customer is identified with their
AccountNumber. They also have some information related to their account like
AccountName, AccountBalance, AccountType. When a customer deposit or
withdraw money then the accountant first find the account and then add or
subtract the amount of money to or from the AccountBalance.*/
#include<iostream>
#include<string>
using namespace std;
class account
{
    int account_number;
    string accountName;
    double accountBalance;
    string accountType;
public:

    account()
    {
        cout<<"Enter the account number:";
        cin>>account_number;
        cin.ignore();
        cout<<"Enter the name of the account:";
        getline(cin,accountName);
        cout<<"Enter the balance:";
        cin>>accountBalance;
        cout<<"Account type:";
        cin>>accountType;
    }
    void display()
    {
       cout<<"Account Number:"<<account_number<<endl;
       cout<<"Account Name:"<<accountName<<endl;
       cout<<"Account Balance:"<<accountBalance<<endl;
       cout<<"Account Type:"<<accountType<<endl;
    }
    friend double deposit_balance(account &a,double deposit);
    friend double withdrawn_Balance(account&a,double withdraw);

};
double deposit_balance(account &a,double x)
{
  a.accountBalance+=x;
  cout<<"Deposited: "<<x<<endl;
  cout<<"New Balance: "<<a.accountBalance<<endl;
   return a.accountBalance;
}
double withdrawn_Balance(account &a,double y)
{
    if(a.accountBalance<y)
    {
        cout<<"Insufficient!";
    }
    else
    {
         a.accountBalance-=y;
        cout<<"Withdrawn: "<<y<<endl;
        cout<<"New Balance: "<<a.accountBalance<<endl;
    }
    return a.accountBalance;
}
int main()
{
    account a;
    deposit_balance(a,500);
    withdrawn_Balance(a,100);
    cout<<"\n___After Transactions___\n";
    a.display();
    return 0;
}
