#include <string>
#include <iostream>
#include "favobj.h"
using namespace std;

		void Favorite_Obj::setter_year (int x)
		{
			year = x;
		}
		int Favorite_Obj::getter_year ()
		{
			return year;
		}
		void  Favorite_Obj::setter_quality (string y)
		{
			quality = y;
		}
		string  Favorite_Obj::getter_quality ()
		{
			return quality;
		}
		Favorite_Obj::Favorite_Obj()
		{
			year = 2000;
			quality = "Good";
			capabilities = "High";
			operating_system = "Android";
			object_name = "Phone";
		}
		string capabilities;
		string operating_system;
		string object_name;
		void  Favorite_Obj::display()
			{
			cout << "Year as " <<year << endl;
			cout << "Quality as " << quality << endl;
			cout << "Capabilities at " << capabilities << endl;
			cout << "The Operating System is at " << operating_system << endl;
			cout << "The Name of the Favorite Object is " <<object_name << endl;
			}
		void  Favorite_Obj::assessment()
		{
			cout << "In the standards of the Year " << year << endl;
			cout << "The Quality of the Phone is " << quality;
		}
	
