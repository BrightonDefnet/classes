#ifndef MUSIC_h
#define MUSIC_h
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include "Media.h"
using namespace std;

class Music : public Media
{
    public:
        Music();
        void ADD();
        void SEARCH(string);
        void DELETE(string);

    private:
        struct song
        {
            string title;
            string artist;
            string year;
            string duration;
            string publisher;
        };
        string str;
        string str2;
        int pos;
        song* curtrack;
        vector<song> list;
        vector<song>::iterator itr;
};
#endif