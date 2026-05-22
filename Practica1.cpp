#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 7, c = 9;

    if (a > b) {
        if (a > c) {
            cout << "a es mayor: " << a << endl;
        } else {
            cout << "c es mayor: " << c << endl;
        }
    } else if (b > c) {
        cout << "b es mayor: " << b << endl;
    } else {
        cout << "c es mayor: " << c << endl;
    }

    return 0;
}