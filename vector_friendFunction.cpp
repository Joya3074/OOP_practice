/*Define a class Vector with private members for x, y, and z components. Write a
friend function that takes two Vector objects as parameters and returns the dot
product.*/
#include<iostream>
using namespace std;
class Vector
{
    double x,y,z;
public:
    Vector()
    {
        cout<<"Enter three vector: ";
        cin>>x>>y>>z;
    }
friend double dotProduct(const Vector &a,const Vector &b);
};
double dotProduct(const Vector &a,const Vector &b)
{
   return a.x*b.x + a.y*b.y + a.z*b.z;
}
int main()
{
    cout<<"First vector: "<<endl;
    Vector a;
    cout<<"Second vector: "<<endl;
    Vector b;
    cout<<"\nDot Product= "<<dotProduct(a,b)<<endl;
    return 0;
}
