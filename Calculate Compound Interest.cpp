#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double principal, rate, time, compoundInterest;
    int n;
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter annual interest rate (in %): ";
    cin >> rate;
    cout << "Enter time in years: ";
    cin >> time;
    cout << "Enter number of times interest is compounded per year: ";
    cin >> n;
    
    rate = rate / 100;
    compoundInterest = principal * pow(1 + rate/n, n*time) - principal;
    
    cout << "Compound Interest: " << compoundInterest << endl;
    return 0;
}