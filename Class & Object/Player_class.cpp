/* The problem is:
You are designing a game and need to create a class called "Player" in C++. The Player class
should have attributes for player name, level, and score. Implement member functions to:
1. Increase the player's score by a given amount.
2. Level up the player.
Create an instance of the Player class with name="Alice", level=1, and score=100. Increase the
score by 50 and level up the player. Print the updated player details.*/
#include<iostream>
#include<string>
using namespace std;
class Player
{
public:
    string name;
    int level,score;
    void increase_score(int amount)
    {
        score+=amount;
        cout<<"The score is increase:"<<amount<<endl;
    }
    void levelup()
    {
        level++;
        cout<<"Leveled up"<<endl;
    }
    void info()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Level: "<<level<<endl;
        cout<<"Score: "<<score<<endl;
    }
};
int main()
{
    Player a;
    a.name="Alice";
    a.level=1;
    a.score=100;
    cout<<"Initial info of the player:"<<endl;
    a.info();
    a.increase_score(50);
    a.levelup();
    cout<<"Updated info of the player:"<<endl;
    a.info();
    return 0;
}
