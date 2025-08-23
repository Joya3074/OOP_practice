/*Write a program to calculate the average height of all the students of a class. The
number of students and their heights entered by the user.*/
#include<iostream>
using namespace std;
class Student
{
public:
    float height;
    void input()
    {
        cin>>height;
    }
};
int main()
{
    Student x[100];
    float sum=0;
    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    cout<<"The height of "<<n<<" students:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Student "<<(1+i)<<":";
        x[i].input();
        sum=sum+x[i].height;
    }
    cout<<"\nAverage height = "<<(sum/n)<<"cm";
    return 0;
}
