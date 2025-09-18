/*In a calendar scheduling app, dates are managed using a Date class. Overload the unary
plus (+) operator to move the current date forward by one day, allowing users to navigate
their schedules more easily.*/
#include<iostream>
using namespace std;
class Date
{
    int day,month,year;
    int daysinmonth(int m,int y)
    {
        if(m==2)
        {
            return (y%400==0||(y%4==0 && y%100 != 0))? 29:28;
        }
        else if (m==4 || m==6 || m==9 || m==11)
        {
            return 30;
        }
        else
        {
            return 31;
        }
    }
public:
    Date (int d,int m,int y)
    {
        day=d;
        month=m;
        year=y;
    }
    void display()
    {
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
    void operator+()
    {
        day++;
        if(day>daysinmonth(month,year))
        {
            day=1;
            month++;
             if(month>12)
            {
                month=1;
                year++;
            }
        }
    }
};
int main ()
{
int a,b,c;
cout<<"Enter day ,month & year: ";
cin>>a>>b>>c;

Date d1(a,b,c);
cout<<"Original: "<<endl;
d1.display();

+d1;
cout<<"After moving 1 days: "<<endl;
d1.display();

+d1;
cout<<"Again: "<<endl;
d1.display();
return 0;
}
