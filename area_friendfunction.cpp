/*the problem is:
Define a class Rectangle with private members for length and width. Write a
friend function findArea that calculates and returns the area of the rectangle.*/
#include<iostream>
using namespace std;
class Rectangle
{
    float length,width;
public:
    void input()
    {
    cout<<"Enter the length: "<<endl;
    cin>>length;
    cout<<"Enter the width: "<<endl;
    cin>>width;
    }
    friend float findArea(Rectangle r);
};
float findArea(Rectangle r)
{
   return r.length*r.width;
}
int main()
{
    Rectangle a ;
    a.input();
   cout<<"Area: "<<findArea(a)<<endl;
    return 0;
}
