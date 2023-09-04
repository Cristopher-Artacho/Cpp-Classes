#include <iostream>
#include <string>
#include "bookinfo.h"
using namespace std;
BookInfo::BookInfo(string title, string author){
            this -> title = title;
            this -> author = author;
        }
        BookInfo::BookInfo(string title){
            this -> title = title;
            author = "Unknown";
        }
        string BookInfo::concat_author_title()
		{
			return author + " " + title;
		}
        void BookInfo::get_title()
        {
            cout << "The book title is " << title << endl;
            cout << "The author is " << author << endl;
            cout << endl;
        }
