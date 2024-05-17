#include <iostream>

int main() {
    
    int n;
    cout << "";
    cin >> n;

    do {
        if (n % 2 = 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        cout << n;
    } while (n != 0);

    return 0;
}