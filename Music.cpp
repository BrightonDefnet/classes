#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include "Music.h"
using namespace std;

Music::Music(){}

//add a trackie
void Music::ADD()
{
    //enter track details    
    song track;
    cout << "\nenter title" << endl;
    cin >> track.title;
    cout << "\nenter artist" << endl;
    cin >> track.artist;
    cout << "\nenter year" << endl;
    cin >> track.year;
    cout << "\nenter duration" << endl;
    cin >> track.duration;
    cout << "\nenter publisher" << endl;
    cin >> track.publisher;
    //add track to the database
    list.push_back(track);
}

//search by title
void Music::SEARCH(string str)
{
    for(itr = list.begin(); itr < list.end(); itr++)
    {
        pos = distance(list.begin(), itr);
        if(list.at(pos).title == str || list.at(pos).year == str)
        {
            curtrack = &list.at(pos);
            cout << "\nType: song" << endl;
            cout << "title: " + curtrack->title << endl;
            cout << "artist: " + curtrack->artist << endl;
            cout << "year: " + curtrack->year << endl;
            cout << "duration: " + curtrack->duration << endl;
            cout << "publisher: " + curtrack->publisher << endl;
        }
    }
}

//delete an entry
void Music::DELETE(string str)
{
    for(itr = list.begin(); itr < list.end(); itr++)
    {
        pos = distance(list.begin(), itr);
        if(list.at(pos).title == str || list.at(pos).year == str)
        {
            curtrack = &list.at(pos);
            cout << "\nType: song" << endl;
            cout << "title: " + curtrack->title << endl;
            cout << "year: " + curtrack->year << endl;
            cout << "artist: " + curtrack->artist << endl;
            cout << "duration: " + curtrack->duration << endl;
            cout << "publisher: " + curtrack->publisher << endl;
            cout << "\ndelete entry? (y/n)" << endl;
            cin >> str2;
            if(str2 == "y") list.erase(list.begin()+pos);
        }
    }
}