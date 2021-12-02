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
    media = &movies;
    media->ADD();
    media->SEARCHBYTITLE();
}