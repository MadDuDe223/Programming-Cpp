#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {10, 20, 5, 30, 15};
    cout << "Largest number: " << *max_element(arr.begin(), arr.end()) << endl;
    return 0;
}