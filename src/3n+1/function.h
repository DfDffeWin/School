#pragma once

#include <iostream>
using namespace std;

class Functions {
public:

    void n3() {
        unsigned long n;
        cout << "";
        cin >> n;

        do {
            if (n % 2) {
                n = 3 * n + 1;
            } else {
                n = n / 2;
            }
            cout << "# " << n << endl;
        } while (n > 1);
    }

};

//  maths :]