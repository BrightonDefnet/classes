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
#include "Music.h"
#include "VideoGames.h"
using namespace std;

int main()
{
    //initialize the vector, add the media class to it, and set up pointers
    vector<Media*> db;
    Media* media;
    Movies movies;
    Music music;
    VideoGames game;
    string action;
    bool running = true;
    bool valid;
    //ask what the user wants to do
    while(running)
    {
        cout << "\nenter an action (add, search, delete, quit)\n" << endl;
        cin >> action;
        //add media
        if(action == "add")
        {
            valid = true;
            cout << "\nwhat kind of media do you want to enter? (movie, game, music)\n" << endl;
            cin >> action;
            //movie
            if(action == "movie")
            {
                media = &movies;
                media->ADD();
            }
            //music
            if(action == "music")
            {
                media = &music;
                media->ADD();
            }
            //video game
            if(action == "game")
            {
                media = &game;
                media->ADD();
            }
        }
        //search for media
        if(action == "search")
        {
            string str;
            cout << "\nenter title or year" << endl;
            cin >> str;
            media = &movies;
            media->SEARCH(str);
            media = &music;
            media->SEARCH(str);
            media = &game;
            media->SEARCH(str);
        }
        //delete media
        if(action == "delete")
        {
            string str;
            cout << "\nenter title or year" << endl;
            cin >> str;
            media = &movies;
            media->DELETE(str);
            media = &music;
            media->DELETE(str);
            media = &game;
            media->DELETE(str);
        }
        //quit the program
        if(action == "quit") running = false;
    }
}