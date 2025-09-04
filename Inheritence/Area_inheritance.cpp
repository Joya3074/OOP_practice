/*Create a class named Shape with data members to store the width and height of a
shape. Create another class named Rectangle that inherits from the Shape class and
has a method to calculate the area of the rectangle. Write a program to create a
Rectangle object and print out its area.*/
#include<iostream>
using namespace std;
class Shape
{
protected:

    float length;
    float width;
};
class Rectangle: public Shape
{
    public:
    Rectangle()
    {
        cout<<"Enter Length:";
        cin>>length;
        cout<<"Enter width: ";
        cin>>width;

    }
    void display()
    {
        cout<<"Area: "<<length*width<<endl;
    }
};
int main()
{
    Rectangle a;
    a.display();
    return 0;
}
