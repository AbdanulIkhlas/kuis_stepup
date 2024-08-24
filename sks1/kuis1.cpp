#include <iostream>
using namespace std;

int main() {
    int a = 3, b = 6, c = 9;
    int *p1 = &a, *p2 = &b, *p3 = &c;
    if (*p1 < *p2) {
        *p1 = *p3;
    }
    if (*p2 > *p1) {
        *p2 = *p1;
    }
    cout << a << " " << b << " " << c << endl;
    return 0;
}
