#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(vector<int> arr, int key) {
    auto it = lower_bound(arr.begin(), arr.end(), key);
    if (it != arr.end() && *it == key) return it - arr.begin();
    return -1;
}

int main() {
    vector<int> arr = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int key = 23;
    int result = binarySearch(arr, key);
    cout << (result != -1 ? "Found at index " + to_string(result) : "Not Found") << endl;
    return 0;
}