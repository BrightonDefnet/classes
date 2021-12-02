/*
    Classes, Brighton Defnet, 2021
    - Database for media
    - Media types: movies, music, video games
*/
#include <iostream>
#include <algorithm>
#include <vector>
#include "Media.h"
#include "Movies.h"
using namespace std;

int main()
{
    //initialize the vector, add the media class to it, and set up pointers
    vector<Media*> db;
    Media* media;
    Movies movies;
    string action;
    bool running = true;
    bool valid;
    //ask what the user wants to do
    while(running)
    {
        cout << "\nenter an action (add, search, delete, quit)\n" << endl;
        cin >> action;
        if(action == "add")
        {
            valid = true;
            cout << "\nwhat kind of media do you want to enter? (movie, video, music)\n" << endl;
            cin >> action;
            if(action == "movie") media = &movies;
            else valid = false;
            if(valid == true) media->ADD();
        }
        else if(action == "search") media->SEARCH();
        else if(action == "delete") media->DELETE();
        else if(action == "quit") running = false;
        else cout << "please try again" << endl;
    }
}