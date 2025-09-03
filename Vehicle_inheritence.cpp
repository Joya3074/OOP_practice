/*Create a class named Vehicle with data members to store the number of wheels and
the top speed of a vehicle. Create another class named Car that inherits from the
Vehicle class and has a data member to store the number of doors. Write a program to
create a Car object and print out its number of wheels, top speed, and number of
doors.*/
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
