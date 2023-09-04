#include <iostream>
#include "pairs_implementation.cpp"
using namespace std;

int main(){
    Pairs pair1(20, 50), pair2(30, 40);
    get_values(pair1, pair2);
    compareFirst(pair1, pair2);
}
