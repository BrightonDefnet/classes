#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include "Movies.h"
using namespace std;

Movies::Movies(){}

void Movies::ADD()
{
    //enter movie details    
    movie mov;
    cout << "enter title" << endl;
    cin >> mov.title;
    str = mov.title;
    cout << "enter director" << endl;
    cin >> mov.director;
    cout << "enter year" << endl;
    cin >> mov.year;
    cout << "enter duration" << endl;
    cin >> mov.duration;
    cout << "enter rating" << endl;
    cin >> mov.rating;
    //add movie to the database
    list.push_back(mov);
}

void Movies::SEARCHBYTITLE()
{
    //get term to search for and search for it
    found = false;
    cout << "enter title" << endl;
    cin >> str;
    for(itr = list.begin(); itr < list.end(); itr++)
    {
        pos = distance(list.begin(), itr);
        if(list.at(pos).title == str)
        {
            found = true;
            curMov = &list.at(pos);
            cout << "\nType: movie" << endl;
            cout << "title: " + curMov->title << endl;
            cout << "director: " + curMov->director << endl;
            cout << "year: " + curMov->year << endl;
            cout << "duration: " + curMov->duration << endl;
            cout << "rating: " + curMov->rating << endl;
        }
    }
}