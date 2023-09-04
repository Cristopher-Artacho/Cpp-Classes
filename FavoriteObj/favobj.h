#include <string>
using namespace std;

class Favorite_Obj{
	public:

		void setter_year (int x);
		int getter_year ();
		void setter_quality (string y);
		string getter_quality ();
		Favorite_Obj();
		string capabilities;
		string operating_system;
		string object_name;
		void display();
		void assessment();
	private:
		int year;
		string quality;
};

