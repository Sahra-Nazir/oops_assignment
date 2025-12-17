#include <iostream>
#include <cstdlib>
using namespace std;

class SafeArray {
    int arr[100];
    int low, high;

public:
    SafeArray(int l, int h) {
        low = l;
        high = h;
    }

    int& operator[](int index) {
        if (index < low || index > high) {
            cout << "Index out of range\n";
            exit(1);
        }
        return arr[index - low];
    }
};

int main() {
    SafeArray a(10, 20);
    a[10] = 50;
    cout << a[10];
    return 0;
}
