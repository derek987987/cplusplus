#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

int main(){
    string name;
    cout << "who are you? ";
    cin >> name;
    string greeting = "Hello " + name;
    if(name == "Kate"){
        greeting += ", I know you!";
    }
    cout << greeting << '\n';

    int length = greeting.length();
    cout << "\"" + greeting + "\" is " << length << " characters long" << '\n';
    string beginning = greeting.substr(greeting.find(' ') + 1);
    cout << beginning << "\n";
    if(beginning == name){
        cout << "expected results" << '\n';
    }
    return 0;
}