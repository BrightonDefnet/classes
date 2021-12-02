#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include "Movies.h"
using namespace std;

Movies::Movies(){}

//add a movie
void Movies::ADD()
{
    //enter movie details    
    movie mov;
    cout << "\nenter title" << endl;
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

//search by title
void Movies::SEARCH(string input)
{
    for(itr = list.begin(); itr < list.end(); itr++)
    {
        pos = distance(list.begin(), itr);
        if(list.at(pos).title == input || list.at(pos).year == input)
        {
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

//delete an entry
void Movies::DELETE(string input)
{
    for(itr = list.begin(); itr < list.end(); itr++)
    {
        pos = distance(list.begin(), itr);
        if(list.at(pos).title == input || list.at(pos).year == input)
        {
            curMov = &list.at(pos);
            cout << "\nType: movie" << endl;
            cout << "title: " + curMov->title << endl;
            cout << "director: " + curMov->director << endl;
            cout << "year: " + curMov->year << endl;
            cout << "duration: " + curMov->duration << endl;
            cout << "rating: " + curMov->rating << endl;
            cout << "\ndelete entry? (y/n)" << endl;
            cin >> str2;
            if(str2 == "y") list.erase(list.begin()+pos);
        }
    }
}