/* The ques :    You are the manager of a sports team and want to find the player with the highest score.
Create a class called "Player" with attributes for player name and score. Implement
member functions to update the player's score and display the player details. Create an
array of 8 Player objects and print the details of the player with the highest score.*/
#include<iostream>
using namespace std;
class Player
{
public:
    string name;
    int score;
    void input()
    {
        cout<<"Enter Players name: ";
        getline(cin,name);
        cout<<"Enter Players Score: ";
        cin>>score;
        cin.ignore();
    }
    void display()
    {
        cout<<"Players Name: "<<name<<" || "<<"Score: "<<score<<endl;
    }
};
int main()
{
Player x[8];
for(int i=0;i<8;i++)
{
    cout<<"Player details :"<<(1+i)<<endl;
    x[i].input();
}
for(int i=0;i<8;i++)
{
    x[i].display();
}
int maximum=x[0].score;
int a=0;
for(int i=0;i<8;i++)
{
  if(x[i].score>maximum)
  {
      maximum=x[i].score;
      a=i;
  }
}
cout<<"\nMaximum Score : "<<maximum<<" by "<<x[a].name<<endl;
return 0;
}
