/*A banking app tracks customer balances using an Account class. Customers can choose
to see their balance grow daily based on interest. Overload the unary increment (++)
operator to add the daily interest to the balance whenever invoked.*/
#include<iostream>
using namespace std;
class Account
{
    double balance,rate_interest;
public:
    Account(double a=0,double b=0)
    {
        balance=a;
        rate_interest=b;
    }
    double operator++()
    {
        balance+=balance*rate_interest;
    }
    void display()
    {
        cout<<"Balance: "<<balance<<endl;
    }
};
int main()
{
    double x,y;
    cout<<"Enter the balance: ";
    cin>>x;
    cout<<"Enter daily interest(0.01 for 1%): ";
    cin>>y;

    Account acc(x,y);
    cout<<"Initial: "<<endl;
    acc.display();

    cout<<"After adding interset:"<<endl;
    ++acc;
    acc.display();
    return 0;
}
