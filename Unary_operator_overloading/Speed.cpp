/*In a car simulation game, a Car class represents the vehicle&#39;s speed. To simulate braking,
overload the unary decrement (--) operator to reduce the car’s speed by 10 units, making
the game’s controls more intuitive.*/
#include<iostream>
using namespace std;
class Car
{
    int speed;
public:
    Car(int initial=0)
    {
        if(initial<0)
        {
            speed=0;
        }
        else
        {
            speed=initial;
        }
    }
    void operator--()
    {
        cout<<"Braking..."<<endl;
        if(speed>=10)
        {
            speed-=10;
        }
        else
        {
            speed=0;
        }
    }
    void show()
    {
        cout<<"Car speed: "<<speed<<endl;
    }
};
int main()
{
    int a;
    cout<<"Enter Car speed: ";
    cin>>a;

    Car c1(a);
    c1.show();

    --c1;
    c1.show();

    --c1;
    c1.show();
    return 0;
}
