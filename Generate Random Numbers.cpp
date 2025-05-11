#include <iostream>
#include <random>
using namespace std;

int main() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(10, 50);
    int n = 5;
    cout << "Random numbers: ";
    for (int i = 0; i < n; i++)
        cout << dis(gen) << " ";
    return 0;
}