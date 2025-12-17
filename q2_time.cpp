#include <iostream>
using namespace std;

class Time {
private:
    int hours, minutes, seconds;

public:
    Time(int h = 0, int m = 0, int s = 0) {
        hours = h;
        minutes = m;
        seconds = s;
        normalize();
    }

    void normalize() {
        minutes += seconds / 60;
        seconds %= 60;

        hours += minutes / 60;
        minutes %= 60;
    }

    Time add(Time t) {
        return Time(hours + t.hours,
                    minutes + t.minutes,
                    seconds + t.seconds);
    }

    void show() const {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
};

int main() {
    Time t1(2, 45, 30);
    Time t2(1, 30, 50);

    Time t3 = t1.add(t2);

    t3.show();
    return 0;
}
