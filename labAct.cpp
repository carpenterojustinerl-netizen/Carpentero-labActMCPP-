#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3, first, last;

    cout << "Enter three numbers : ";
    cin >> num1 >> num2 >> num3;

    // Find the smallest (first) number
    first = num1;
    if (num2 < first) first = num2;
    if (num3 < first) first = num3;

    // Find the largest (last) number
    last = num1;
    if (num2 > last) last = num2;
    if (num3 > last) last = num3;

    cout << endl;
    cout << first << " is the first number numerically" << endl;
    cout << last << " is the last number numerically" << endl;

    return 0;
}
