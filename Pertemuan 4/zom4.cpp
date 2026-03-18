#include <iostream>
using namespace std;

int main() {
    int x = 7;
    int y;

    y = x++;  
    cout << y << " " << x;

    return 0;
}