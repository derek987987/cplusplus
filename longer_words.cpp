#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

int main(){
    string phrase_1;
    cout << "type first phrase " << '\n';
    getline(cin,phrase_1);

    string phrase_2;
    cout << "type second phrase " << '\n';
    getline(cin,phrase_2);

    if(phrase_1.length() > phrase_2.length()){
        cout << "phrase 1 is longer" << '\n';
    }else if(phrase_2.length() > phrase_1.length()){
        cout << "phrase 2 is longer" << '\n';
    }else{
        cout << "same length" << '\n';
    }
    return 0;
}