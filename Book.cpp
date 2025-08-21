/*You are working on a library management system and need to create a class called
"Book" in C++. The Book class should have attributes for book ID, title, author, and availability
status. Implement member functions to:
1. Check out the book.
2. Return the book.
3. Display the book details.
Create an instance of the Book class with ID="B001", title="To Kill a Mockingbird",
author="Harper Lee", and availability status="available". Check out the book, return it, and
display the updated book details.*/
#include<iostream>
#include<string>
using namespace std;
class Book
{
public:
    string bookID;
    string title;
    string author;
    string status;
    void check()
    {
        if (status=="available")
        {
            status="checked out";
            cout<<"Book checked out succesfully!"<<endl;
        }
        else
        {
            cout<<"Book is already checked out"<<endl;
        }
    }
    void returnbook()
    {
        if (status=="checked out")
        {
            status ="available";
            cout<<"Book returned successfully"<<endl;
        }
        else
        {
            cout<<"Book is already available"<<endl;
        }
    }
    void display()
    {
        cout<<"Book ID: "<<bookID<<endl;
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Status: "<<status<<endl;
    }
};
int main ()
{
    Book a;
    a.bookID="B001";
    a.title="To kill a Mockingbird";
    a.author="Harper Lee";
    a.status="available";
    a.check();
    a.returnbook();
    cout<<"\nUpdated Book Info:"<<endl;
    a.display();
    return 0;
}
