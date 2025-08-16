/*The problem is:
You are developing a restaurant ordering system and need to create a class called "MenuItem" in
C++. The MenuItem class should have attributes for item name, price, and description.
Implement a member function to:
1. Display the details of the menu item.
Create an instance of the MenuItem class with name="Cheeseburger", price=10.99, and
description="Juicy beef patty with melted cheese." Call the display function to print the menu
item details.*/
#include<iostream>
#include<string>
using namespace std;
class MenuItem
{
public:
    string name;
    double price;
    string description;
    void display()
    {
        cout<<"Item Name: "<<name<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Description: "<<description<<endl;
    }
};
int main()
{
    MenuItem item;
    item.name="Cheeseburger";
    item.price=10.99;
    item.description="Juicy beef patty with melted cheese ";
    item.display();
    return 0;
}
