//Defines the entry point for the console application

#include "Tweeter.h"
#include "status.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

int main(){
    Person p1("Kate", "Gregory",123);
    Person p2("Someone", "else", 456);

    cout << "p1 is ";
    if(!(p1 < p2)){
        cout << "not ";
    }
    cout << "less than p2" << endl;

    cout << "p1 is ";
    if(!(p1 < 300)){
        cout << "not ";
    }
    cout << "less than 300" << endl;

    cout << "300 is ";
    if(!(300 < p1)){
        cout << "not ";
    }
    cout << "less than p1" << endl;
    return 0;
}