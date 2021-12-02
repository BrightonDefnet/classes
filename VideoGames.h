#ifndef VIDEOGAMES_h
#define VIDEOGAMES_h
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include "Media.h"
using namespace std;

class VideoGames : public Media
{
    public:
        VideoGames();
        void ADD();
        void SEARCH(string);
        void DELETE(string);

    private:
        struct game
        {
            string title;
            string year;
            string publisher;
            string rating;
        };
        string str;
        string str2;
        int pos;
        game* curGame;
        vector<game> list;
        vector<game>::iterator itr;
};
#endif