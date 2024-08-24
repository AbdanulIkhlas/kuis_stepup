#include <iostream>
using namespace std;

int main() {
    int x = 5, y = 10;
    int *p1 = &x, *p2 = &y;
    int *temp = p1;
    p1 = p2;
    p2 = temp;
    *p1 += 1;
    *p2 -= 1;
    cout << x << " " << y << endl;
    return 0;
}
