#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, original, remainder, n = 0, result = 0;
    cout << "Enter an integer: ";
    cin >> num;
    original = num;
    
    while (original != 0) {
        original /= 10;
        n++;
    }
    
    original = num;
    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, n);
        original /= 10;
    }
    
    if (result == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;
    return 0;
}