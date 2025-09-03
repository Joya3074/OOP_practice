#include<iostream>
using namespace std;
class Person
{
protected:
    string name;
};
class Student : public Person{
public:
string id;
Student()
    {
    cout<<"Enter the name:";
    cin>>name;
    cout<<"Enter the id :";
    cin>>id;
    }
void display()
{
    cout<<"Name: "<<name<<endl;
    cout<<"ID: "<<id<<endl;

}
};

int main()
{
    Student s;
    s.display();
    return 0;
}
