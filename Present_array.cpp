/*The problem is:
You are organizing a school event and need to keep track of the participating students.
Create a class called "Student" with attributes for student name and participation status.
Implement member functions to mark a student as present and display the student
details. Create an array of 5 Student objects and print the details of all students who
attended the event.*/
#include<iostream>
#include<string>
using namespace std;
class student
{
public:
    string name;
    bool present;

student(string studentName)
{
    name=studentName;
    present=false;
}
void mark_present()
{
    present=true;
}
void display()
{
    cout<<"Student Name: "<<name<<" , Participation Status: "<<(present? "present":"Absent")<<endl;
}
};
int main()
{
    student s[5]={ student("X"),student("Y"),student("Z"),student("A"),student("B")};
    s[0].mark_present();
    s[3].mark_present();
    cout<<"Students who attented the event:"<<endl;
    for(int i=0;i<5;i++)
    {
        if(s[i].present)
        {
            s[i].display();
        }
    }
    return 0;
}
