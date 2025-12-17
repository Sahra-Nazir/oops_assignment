#include <iostream>
using namespace std;

class Time {
    int h, m;

    void normalize() {
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

    Time operator-(Time t) {
        Time temp(h - t.h, m - t.m);
        temp.normalize();
        return temp;
    }

    Time operator*(float x) {
        int totalMin = h * 60 + m;
        totalMin = totalMin * x;
        return Time(totalMin / 60, totalMin % 60);
    }

    void show() {
        cout << h << " hrs " << m << " mins\n";
    }
};

int main() {
    Time t1(3, 40), t2(1, 50);
    (t1 - t2).show();
    (t1 * 1.5).show();
    return 0;
}
