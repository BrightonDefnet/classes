#ifndef MEDIA_h
#define MEDIA_h
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Media
{
    public:
        Media();
        virtual void ADD();
        virtual void SEARCHBYTITLE();
        virtual void SEARCHBYDATE();
        void DELETE();
        
    private:
        int entries;
        string str;
};
#endif