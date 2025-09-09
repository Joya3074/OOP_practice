/*Create a class named Animal with a data member to store the name of the animal.
Create another class named Cat that inherits from the Animal class and has a data
member to store the number of lives of a cat. Write a program to create a Cat object
and print out its name and number of lives.*/
#include<iostream>
using namespace std;
class Animal
{
protected:
    string name;
};
class Cat:public Animal
{
private:
    int live;
public:
    Cat()
    {
        cout<<"Enter Cat's name:";
        cin>>name;
        cout<<"Enter Number of lives:";
        cin>>live;
    }
    void display()
    {
        cout<<"Animal Name: "<<name<<endl<<"Number of lives: "<<live<<endl;
    }
};
int main()
{
    Cat a;
    a.display();
    return 0;
}

