#ifndef MOVIES_h
#define MOVIES_h
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include "Media.h"
using namespace std;

class Movies : public Media
{
    public:
        Movies();
        string str;
        struct movie
        {
            string title;
            string director;
            string year;
            string duration;
            string rating;
        };
        int pos;
        bool found;
        movie* curMov;
        void ADD();
        void SEARCHBYTITLE();

    private:
        vector<movie> list;
        vector<movie>::iterator itr;
};
#endif