#include <iostream>
using namespace std;

class Distance {
    int feet;
    float inches;

public:
    Distance(int f = 0, float i = 0) {
        feet = f;
        inches = i;
    }

    Distance operator-(Distance d) {
        int f = feet - d.feet;
        float i = inches - d.inches;

        // borrow logic
        if (i < 0) {
            i += 12;
            f--;
        }
        return Distance(f, i);
    }

    void show() {
        cout << feet << " feet " << inches << " inches\n";
    }
};

int main() {
    Distance d1(8, 6.5), d2(3, 9.5);
    Distance d3 = d1 - d2;
    d3.show();
    return 0;
}
