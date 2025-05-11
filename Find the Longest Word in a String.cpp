#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    
    stringstream ss(str);
    string word;
    string longest;
    int max_len = 0;
    
    while (ss >> word) {
        if (word.length() > max_len) {
            max_len = word.length();
            longest = word;
        }
    }
    
    cout << "Longest word: " << longest << endl;
    return 0;
}