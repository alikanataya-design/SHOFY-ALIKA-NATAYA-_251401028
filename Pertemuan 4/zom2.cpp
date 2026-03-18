#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;

    if (a % b == 0 && a / b > 2) {
        cout << "VALID";
    } else {
        cout << "TIDAK";
    }

    return 0;
}