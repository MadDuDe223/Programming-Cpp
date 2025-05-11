#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    cout << "Binary equivalent: " << bitset<32>(decimal) << endl;
    return 0;
}