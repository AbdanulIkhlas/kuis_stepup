#include <iostream>
using namespace std;

void tambah(int *p, int value) {
    *p += value;
}

int main() {
    int a = 5;
    tambah(&a, 10);
    cout << a << endl;
    return 0;
}
