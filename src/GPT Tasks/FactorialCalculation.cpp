/*
Factorial Calculation

Description: Write a function that calculates
the factorial of a number using a loop.
*/

#include <iostream>

using namespace std;

int main() {

    int n, res = 1;
    cin << n;

    for (int i = n; i > 0; i--) {
        res *= i;
    }

    cout << "Factorial of " << n << " is " << res;

}