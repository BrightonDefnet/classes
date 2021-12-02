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
        virtual void SEARCH(string input);
        virtual void DELETE(string input);
        
    private:
        int entries;
        string str;
};
#endif