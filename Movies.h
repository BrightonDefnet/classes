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
        void ADD();
        void SEARCH();
        void DELETE();

    private:
        struct movie
        {
            string title;
            string director;
            string year;
            string duration;
            string rating;
        };
        string str;
        string str2;
        int pos;
        movie* curMov;
        vector<movie> list;
        vector<movie>::iterator itr;
};
#endif