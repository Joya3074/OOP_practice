#include<iostream>
using namespace std;
class Vehicle
{
protected:
    int wheel;
    double speed;
};
class Car:public Vehicle
{
public:
    int door;
    Car(int a,double b,int c)
    {
        wheel=a;
        speed=b;
        door=c;
    }
    void display()
    {
        cout<<"Wheel:"<<wheel<<endl;
        cout<<"Speed:"<<speed<<endl;
        cout<<"Door:"<<door<<endl;
    }
};
int main()
{
    Car a(4,150.34,1);
    a.display();
    return 0;
}
