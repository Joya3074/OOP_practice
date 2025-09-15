/*Task:You are organizing a conference and need to keep track of the speakers and their
presentation topics. Create a class called "Speaker" with attributes for speaker name
and topic. Implement member functions to update the speaker's topic and display the
speaker details. Create an array of 10 Speaker objects and print the details of all
speakers along with their topics.*/
#include<iostream>
using namespace std;
class Speaker
{
public:
    string name,topic;
    void input()
    {
        cout<<"enter name: ";
        cin>>name;
        cout<<"Topic: ";
        cin>>topic;
    }
    void display()
    {
        cout<<"Speaker name: "<<name<<endl;
        cout<<"Speaker topic: "<<topic<<endl;
    }
    string change_topic(string a)
    {
        return topic=a;
    }
};
int main()
{
    Speaker x[10];
    for(int i=0;i<10;i++)
    {
        x[i].input();
    }
    cout<<"\nSpeaker:\n";
      for(int i=0;i<10;i++)
    {
        x[i].display();
    }
    cout<<"\nAfter updated:\n";
    x[2].change_topic("Hackings");
    x[5].change_topic("Networks")
      cout<<"Speaker:\n";
      for(int i=0;i<10;i++)
    {
        x[i].display();
    }
return 0;
}
