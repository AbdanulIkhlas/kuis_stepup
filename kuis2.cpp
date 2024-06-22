#include <iostream>
using namespace std;

int main() {
    int arr[3] = {1, 2, 3};
    int *p1 = &arr[0], *p2 = &arr[1], *p3 = &arr[2];
    *p2 = *p1 + *p3;
    p3 = p1;
    *p1 = *p2 - *p3;
    cout << arr[1];
    return 0;
}
