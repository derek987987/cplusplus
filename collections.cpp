#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

#include <vector>
using std::vector;
using std::begin;
using std::end;

#include <algorithm>
using std::sort;
using std::count;

int main(){
    vector<int> nums;
    //push nums into the vector of int
    for(int i = 0; i < 10 ; i++){
        nums.push_back(i);
    }
    //print all nums using auto item
    for(auto item:nums){
        cout << item << " ";
    }
    cout << '\n';

    //push 3 input into the vector of string
    vector<string> words;
    cout << "Enter 3 words" << " ";
    for(int j = 0; j < 3; j++){
        string s;
        cin >> s;
        words.push_back(s);
    }
    //print all words using auto item
    for(auto item:words){
        cout << item << " ";
    }
    cout << '\n';

    cout << "int vector nums has " << nums.size() << " elements." << '\n';
    //change some nums in the vector
    nums[5] = 3;
    nums[6] = -1;
    nums[1] = 99;

    //print all the nums again
    for(auto item:nums){
        cout << item << " ";
    }
    cout << '\n';    
    
    //using another method to print the same
    for(unsigned int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    cout << '\n';

    //iterator i to loop and print all values
    for (auto i = begin(nums); i != end(nums); i++){
        cout << *i << " ";
    }
    cout << '\n';

    //sort function to sort words in alphabetical order
    sort(begin(words),end(words));
    for(auto item:words){
        cout << item << " ";
    }
    cout << '\n';

    //check how many numbers is 3
    int threes = count(begin(nums), end(nums), 3);
    cout << "vector of ints has " << threes << " element of values 3" << '\n';

    //check how many t in the first word
    int tees = count(begin(words[0]), end(words[0]), 't');
    cout << "first word has " << tees << " letter t's" << '\n';

    return 0;
}