#include <iostream>
#include <cmath>
using namespace std;

class Polar {
    double r, angle;

public:
    Polar(double rr = 0, double a = 0) {
        r = rr;
        angle = a;
    }

    Polar operator+(Polar p) {
        double x1 = r * cos(angle);
        double y1 = r * sin(angle);

        double x2 = p.r * cos(p.angle);
        double y2 = p.r * sin(p.angle);

        double x = x1 + x2;
        double y = y1 + y2;

        return Polar(sqrt(x*x + y*y), atan2(y, x));
    }

    void show() {
        cout << "r = " << r << " angle = " << angle << endl;
    }
};

int main() {
    Polar p1(5, 0.5), p2(4, 1.0);
    Polar p3 = p1 + p2;
    p3.show();
    return 0;
}
