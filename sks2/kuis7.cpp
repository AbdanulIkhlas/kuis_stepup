#include <iostream>
using namespace std;


int main() {
    int x = 4;
    int y = x++ * ++x;
    cout << y;
}

// 24