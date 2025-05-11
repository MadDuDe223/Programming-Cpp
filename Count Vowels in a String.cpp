#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int countVowels(string str) {
    int count = 0;
    for (char c : str) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') count++;
    }
    return count;
}

int main() {
    string str = "Hello World";
    cout << "Vowel count: " << countVowels(str) << endl;
    return 0;
}