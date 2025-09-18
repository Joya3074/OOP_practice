/*A robot’s energy consumption is monitored through a Battery class. Every action the
robot performs consumes some energy. Overload the unary minus (-) operator to simulate
an energy-consuming action, adjusting the battery level accordingly.*/
#include<iostream>
using namespace std;
class Battery
{
    int level;
public:
    Battery(int initial=100)
    {
        if(initial<=100 && initial>=0)
        {
            level=initial;
        }
        else if(initial>100)
        {
            level=100;
        }
        else
        {
            level=0;
        }
    }
    void operator-()
    {
        cout<<"Performing an action....";
        if(level>0)
        {
            level-=10;
        }
        else if(level<0)
        {
            level=0;
            cout<<"Battery reduced by 10%"<<endl;
        }
        else
        {
            cout<<"Battery is empty! "<<endl;
        }
    }
    void show()
    {
        cout<<"Battery level: "<<level<<"%"<<endl;
    }
};
int main()
{
    int x;
    cout<<"Enter the battery level: ";
    cin>>x;
    Battery b1(x);
    b1.show();
    cout<<"Another action:"<<endl;
     -b1;
     b1.show();
      cout<<"Again another action:"<<endl;
     -b1;
     b1.show();
     return 0;
}

