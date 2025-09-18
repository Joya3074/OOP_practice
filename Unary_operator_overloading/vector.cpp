/*In a physics simulation, vectors represent forces acting on an object. Create a Vector
class that can invert the direction of a force using the unary minus (-) operator, allowing
users to simulate opposite force applications easily.*/
#include<iostream>
using namespace std;
class Vector
{
    int a,b,c;
public:
    Vector(int x=0,int y=0,int z=0)
    {
        a=x;
        b=y;
        c=z;
    }
    void display()
    {
        cout<<"Vector: "<<a<<" , "<<b<<" , "<<c<<endl;
    }
    Vector operator-()
    {
        return Vector(-a,-b,-c);
    }
};
int main()
{
    int p,q,r;
    cout<<"Enter three term of vector : ";
    cin>>p>>q>>r;
  
    Vector v1(p,q,r);
    cout<<"Original: "<<endl;
    v1.display();
  
    Vector v2=-v1;
    cout<<"Inverted: "<<endl;
    v2.display();
    return 0;
}
