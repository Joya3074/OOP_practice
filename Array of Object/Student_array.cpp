/*Write a program to print the roll number and average marks of 8 students in three
subjects (each out of 100). The marks are entered by the user and the roll numbers are
automatically assigned.*/
#include<iostream>
using namespace std;
class Student
{
    int roll;
    int mark1,mark2,mark3;
    float avg;
public:
    void setroll(int r)
    {
        roll=r;
    }
    void input()
    {
        cout<<"Enter 3 marks of roll number "<<roll<<" :";
        cin>>mark1>>mark2>>mark3;
        avg=(mark1+mark2+mark3)/3.0;
    }
    void display()
    {
        cout<<"Roll No: "<<roll<<" ||Average Number: "<<avg<<endl;
    }
};
int main ()
{
    Student x[8];
    for(int i=0;i<8;i++)
    {
        x[i].setroll(1+i);
        x[i].input();
    }
    cout<<"\n____Student Average mark___\n";
     for(int i=0;i<8;i++)
    {
        x[i].display();
    }
    return 0;
}
