/*The problem is:
You are developing a music player application and need to create a class called "Song" in C++.
The Song class should have attributes for song title, artist name, and duration. Implement a
member function to:
1. Display the details of the song.
Create an instance of the Song class with title="Bohemian Rhapsody", artist name="Queen", and
duration="5:55". Call the display function to print the song details.*/
#include<iostream>
#include<string>
using namespace std;
class Song
{
public:
    string title;
    string artist;
    string duration;
    void display()
    {
        cout<<"Song Title:"<<title<<endl;
        cout<<"Artist name:"<<artist<<endl;
        cout<<"Duration:"<<duration<<endl;
    }
};
int main()
{
    Song a;
    a.title="Bohemian Rhapsody";
    a.artist="Queen";
    a.duration="5:55";
    a.display();
    return 0;
}
