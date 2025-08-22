/*The Problem os:
You are developing a calendar application and need to create a class called "Event" in C++. The
Event class should have attributes for event name, date, and location. Implement a member
function to:
1. Display the details of the event.
Create an instance of the Event class with name="Birthday Party", date="2023-08-15", and
location="Park Plaza". Call the display function to print the event details.*/
#include<iostream>
#include<string>
using namespace std;
class Event
{
public:
    string name;
    string date;
    string location;
    void display()
    {
        cout<<"Event Name:"<<name<<endl<<"Event date:"<<date<<endl<<"Event Location:"<<location<<endl;
    }
};
int main ()
{
    Event x;
    x.name="Birthday Party";
    x.date="2023-08-15";
    x.location="Park Plaza";
    x.display();
    return 0;
}
