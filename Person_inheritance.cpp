/*Create a class named Person with a data member to store the name of the person.
Create another class named Student that inherits from the Person class and has a data
member to store the student ID. Write a program to create a Student object and print
out their name and ID.*/
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
