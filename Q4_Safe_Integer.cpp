#include <iostream>
#include <climits>
#include <cstdlib>
using namespace std;

class SafeInt {
    int value;

    void check(long long r) {
        if (r > INT_MAX || r < INT_MIN) {
            cout << "Overflow detected\n";
            exit(1);
        }
    }

public:
    SafeInt(int v = 0) {
        value = v;
    }

    SafeInt operator+(SafeInt s) {
        long long r = value + s.value;
        check(r);
        return SafeInt(r);
    }

    void show() {
        cout << value << endl;
    }
};

int main() {
    SafeInt a(100000), b(20000);
    SafeInt c = a + b;
    c.show();
    return 0;
}
