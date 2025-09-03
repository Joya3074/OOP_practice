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
