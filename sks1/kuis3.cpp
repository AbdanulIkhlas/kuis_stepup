#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 2, c = 3;
    int *p1 = &a, *p2 = &b, *p3 = &c;
    *p1 = *p2 + *p3;
    p2 = &a;
    *p3 = *p2 - 1;
    cout << a << " " << b << " " << c << endl;
    return 0;
}
