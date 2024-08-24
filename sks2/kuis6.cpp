#include <iostream>
using namespace std;


int main() {
    int a = 0;
    a = (a++ || --a);
    cout << a;
}

// 0