#include <iostream>
using namespace std;

class bMoney {
    long double money;

public:
    bMoney(long double m = 0) {
        money = m;
    }

    bMoney operator+(bMoney b) {
        return bMoney(money + b.money);
    }

    bMoney operator*(long double x) {
        return bMoney(money * x);
    }

    void show() {
        cout << money << endl;
    }
};

int main() {
    bMoney m1(100.5), m2(200.25);
    (m1 + m2).show();
    (m1 * 2).show();
    return 0;
}
