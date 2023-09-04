#include <string>
using namespace std;
class BookInfo{
    private:
        string title;
        string author;

    public:
        BookInfo(string title, string author);
        BookInfo(string title);
        string concat_author_title();
        void get_title();
};
