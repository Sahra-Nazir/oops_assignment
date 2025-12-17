#include <iostream>
using namespace std;

class Time {
    int hours, minutes;

public:
    Time(int h = 0, int m = 0) {
        hours = h;
        minutes = m;
    }

    Time operator+(Time t) {
        int h = hours + t.hours;
        int m = minutes + t.minutes;

        if (m >= 60) {
            h++;
            m -= 60;
        }
        return Time(h, m);
    }

    void show() {
        cout << hours << " hours " << minutes << " minutes\n";
    }
};

int main() {
    Time t1(2, 45), t2(1, 30);
    Time t3 = t1 + t2;
    t3.show();
    return 0;
}
