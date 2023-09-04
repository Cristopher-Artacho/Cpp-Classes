
#include <iostream>
#include <string>
#include "bookinfo.cpp"
using namespace std;
int main(){
    BookInfo book1("Parasites in Love", "Sugaru Miaki");
    BookInfo book2("Three Days of Happiness", "Sugaru Miaki");
    BookInfo book3("Oyasumi Punpun", "Inio Asano");
    BookInfo book4("Re: Zero");

    book1.get_title();
    book2.get_title();
    book3.get_title();
    book4.get_title();
    
    cout << book1.concat_author_title() << endl;
    cout << book2.concat_author_title() << endl;
    cout << book3.concat_author_title() << endl;
    cout << book4.concat_author_title() << endl;
}
