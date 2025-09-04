/*The Question is:
You work for a car rental company and need to create a C++ class called "Car" to manage their
fleet. The Car class should have attributes for make, model, year, and mileage. Implement
member functions to:
1. Get the car's information as a formatted string.
2. Update the car's mileage.
3. Check if the car is a luxury car.
Create an instance of the Car class with make="Toyota", model="Camry", year=2021, and
mileage=10000. Call the information function and print the result. Then, update the mileage by
500 and call the information function again. Finally, check if the car is a luxury car and print the
result.
Your implementation should demonstrate the use of classes, member functions, and object
instantiation in C++.*/
#include<iostream>
using namespace std;
class Car
{
public:
    string make;
    string model;
    int year;
    int mileage;

    void info()
    {
    cout<<"Make= "<<make<<endl;
    cout<<"Model= "<<model<<endl;
    cout<<"Year= "<<year<<endl;
    cout<<"Mileage= "<<mileage<<endl;
    }

    int updatemileage(int m)
    {
        return mileage+=m;
    }

    bool check()
    {
    if(make=="BMW"||make=="Lamborgini"||make=="Audi")
        return true;
    else
        return false;
    }

};
int main()
{
    Car c;
    c.make="Toyota";
    c.model="Camry";
    c.year=2021;
    c.mileage=10000;

    c.info();
    c.updatemileage(500);
    cout<<"Update car info:"<<endl;
    c.info();
    if(c.check())
   {
       cout<<"This is a luxury car"<<endl;
   }
   else
   {
       cout<<"This is not a luxury car"<<endl;
   }
return 0;
}
