#include <iostream>
using namespace std;

class Time {
    int h, m;

    void normalize() {
        if (m >= 60) {
            h++;
            m -= 60;
        }
        if (m < 0) {
            h--;
            m += 60;
        }
    }

public:
    Time(int hh = 0, int mm = 0) {
        h = hh;
        m = mm;
    }

    Time& operator++() {        // prefix
        m++;
        normalize();
        return *this;
    }

    Time operator++(int) {      // postfix
        Time temp = *this;
        m++;
        normalize();
        return temp;
    }

    void show() {
        cout << h << ":" << m << endl;
    }
};

int main() {
    Time t(2, 59);
    t++;
    t.show();
    return 0;
}
