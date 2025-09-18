/*You are building a weather forecasting app. Each city has a Temperature class with its
temperature recorded in Celsius. Overload the unary minus (-) operator so that when
applied, it converts the temperature to Fahrenheit for users who prefer it.*/
#include<iostream>
using namespace std;
class Temperature
{
    double celsius;
public:
    Temperature(double c=0)
    {
        celsius=c;
    }
    void display()
    {
        cout<<"The celcius temperature is: "<<celsius<<endl;
    }
    double operator-()
    {
        return (celsius*9.0/5.0)+32;
    }
};
int main()
{
    Temperature x(100);
    x.display();
    double f=-x;
    cout<<"Temperature in Fahrenheit : "<<f<<endl;
    return 0;
}
