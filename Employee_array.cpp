/*Write a program to print the name, salary, and date of joining of 10 employees in a
company. Use an array of objects.*/
#include<iostream>
#include<string>
using namespace std;
class Employee
{
    string name;
    double salary;
    string dateOfJoining;
public:
    void input()
    {
        cout<<"Enter name:";
        getline(cin,name);
        cout<<"Enter salary:";
        cin>>salary;
        cin.ignore();
        cout<<"Enter date of joining(dd-mm-yyyy) :";
        getline(cin,dateOfJoining);
    }
    void display()
    {
        cout<<"Name: "<<name<<" ||Salary: "<<salary<<" ||Date of Joining: "<<dateOfJoining<<endl;
    }
};
int main()
{
    Employee x[10];
    cout<<"___Enter details of 10 employee__"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<"\nEmployee "<<(i+1)<<":\n";
        x[i].input();
    }
    cout<<"__Employee details__"<<endl;
    for(int i=0;i<10;i++)
    {
        x[i].display();
    }
    return 0;
}
