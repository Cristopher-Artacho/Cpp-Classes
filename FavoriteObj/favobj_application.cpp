#include <iostream>
#include <string>
#include "favobj.cpp"
using namespace std;


int main ()
{
	Favorite_Obj specs, details;
	details.setter_year(2023);
	details.setter_quality("High");
	specs.capabilities;
	specs.operating_system;
	details.object_name;
	
	
	
	cout << "The variables below are initiated to:" << endl;
	details.display();
	cout << endl;
	cout << "The year for today is " << details.getter_year() << endl;
	cout << "To know if your Phone Quality is " << details.getter_quality() << ", Fill out the information Below:" << endl;
	
	cout << "What is the Operating System? ";
	cin >> specs.operating_system;
	cout <<  "Its capabilities should be ";
	cin >> specs.capabilities;
	if (specs.operating_system == "Android" && specs.capabilities == "High")
		{	
			details.setter_quality("High");
		}
		
		else if(specs.capabilities == "Low" && specs.operating_system == "Apple")
		{
			details.setter_quality("Mid");
		}
		else
		{	
			details.setter_quality("Garbage");
			
		}
		cout << endl;
	details.assessment();
}
