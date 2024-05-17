#include <iostream>

using namespace std;

int main() {
    
    int n;
    cout << "";
    cin >> n;

    do {
        if (n % 2) {
            n = 3 * n + 1;
        } else {
            n = n / 2;
        }
        cout << "# " << n << endl;
    } while (n != 0);

    return 0;
}