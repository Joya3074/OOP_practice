/*You are building a social media platform and need to create a class called "Post" in C++. The
Post class should have attributes for post ID, author name, and content. Implement member
functions to:
1. Edit the content of the post.
2. Display the post details.
Create an instance of the Post class with ID=1, author name="Jane", and content="Hello, world!"
Edit the post content to "Welcome to my profile!" and display the updated post details.*/
#include<iostream>
#include<string>
using namespace std;
class Post
{
public:
    int postID;
    string author;
    string content;
    void edit_content(string new_content)
    {
        content=new_content;
        cout<<"Post content updated"<<endl;
    }
    void display()
    {
        cout<<"Post ID: "<<postID<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Content: "<<content<<endl;
    }
};
int main()
{
    Post a;
    a.postID=1;
    a.author="Jane";
    a.content="Hello, world!";
    cout<<"Original Post:"<<endl;
    a.display();
    a.edit_content("Welcome to my profile!");
    cout<<"\nUpdated Post: "<<endl;
    a.display();
    return 0;
}
