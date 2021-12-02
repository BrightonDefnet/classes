#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include "VideoGames.h"
using namespace std;

VideoGames::VideoGames(){}

//add a game
void VideoGames::ADD()
{
    //enter game details    
    game gam;
    cout << "\nenter title" << endl;
    cin >> gam.title;
    str = gam.title;
    cout << "enter year" << endl;
    cin >> gam.year;
    cout << "enter publisher" << endl;
    cin >> gam.publisher;
    cout << "enter rating" << endl;
    cin >> gam.rating;
    //add game to the database
    list.push_back(gam);
}

//search by title
void VideoGames::SEARCH(string input)
{
    for(itr = list.begin(); itr < list.end(); itr++)
    {
        pos = distance(list.begin(), itr);
        if(list.at(pos).title == input || list.at(pos).year == input)
        {
            curGame = &list.at(pos);
            cout << "\nType: game" << endl;
            cout << "title: " + curGame->title << endl;
            cout << "year: " + curGame->year << endl;
            cout << "publisher: " + curGame->publisher << endl;
            cout << "rating: " + curGame->rating << endl;
        }
    }
}

//delete an entry
void VideoGames::DELETE(string input)
{
    for(itr = list.begin(); itr < list.end(); itr++)
    {
        pos = distance(list.begin(), itr);
        if(list.at(pos).title == input || list.at(pos).year == input)
        {
            curGame = &list.at(pos);
            cout << "\nType: game" << endl;
            cout << "title: " + curGame->title << endl;
            cout << "year: " + curGame->year << endl;
            cout << "publisher: " + curGame->publisher << endl;
            cout << "rating: " + curGame->rating << endl;
            cout << "\ndelete entry? (y/n)" << endl;
            cin >> str2;
            if(str2 == "y") list.erase(list.begin()+pos);
        }
    }
}