#include <iostream>
#include "pairs.h"

		
		Pairs::Pairs(int first, int second){
            this -> first = first;
            this -> second = second;
        }
        Pairs::Pairs(){
            this -> first = 0;
            this -> second = 0;
        }
        


void compareFirst(Pairs& a, Pairs& b)
{
    if (a.first > b.first)
    {
        std::cout << "First Object has the bigger value of first!\n";
    }
    else if (a.first < b.first)
    {
        std::cout << "Second Object has the bigger value of first!\n";
    }
    else
    {
        std::cout << "The first value and the second value has the same value!\n";
    }
}
bool isSumEven(Pairs& a, Pairs& b)
{
    int c;
    bool sum_status;
    c = a.first + b.first;
    if (c % 2 == 0)
    {
        std::cout << "The sum of the both objects' second variable are even!\n";
        sum_status = 1;
    }
    else
    {
        std::cout << "The sum of the values are not even!\n";
        sum_status = 0;
    }
    return sum_status;
}
void get_values(Pairs& a, Pairs& b)
{
    std::cout << "The first value of the first object is: " << a.first << "\n";
    std::cout << "The second value of the first object is: " << a.second << "\n\n";
    std::cout << "The first value of the second object is: " << b.first << "\n";
    std::cout << "The second value of the second object is: " << b.second << "\n";
}
