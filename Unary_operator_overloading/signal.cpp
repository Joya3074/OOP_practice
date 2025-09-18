/*You’re creating a circuit simulator that tracks the states of digital signals (1 or 0).
Develop a Signal class and overload the unary not (!) operator to invert a signal,
simulating the behavior of NOT gates in a digital circuit.*/
#include<iostream>
using namespace std;
class Signal
{
    int state;
public:
    Signal(int s=0)
    {
        if(s==0||s==1)
        {
            state=s;
        }
        else
        {
            cout<<"Invalid defaulting 0."<<endl;
            state=0;
        }
    }
    Signal operator!()
    {
        return Signal(!state);
    }
    void display()
    {
        cout<<"Signal state: " <<state<<endl;
    }
};
int main()
{
int input;
cout<<"Enter signal (1 or 0): ";
cin>>input;
Signal s1(input);
cout<<"Original"<<endl;
s1.display();
Signal s2=!s1;
cout<<"After not gate"<<endl;
s2.display();
Signal s3=!s2;
cout<<"Again not gate"<<endl;
s3.display();
return 0;
}
