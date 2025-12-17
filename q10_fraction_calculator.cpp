#include <iostream>
using namespace std;

class Fraction {
public:
    int num, den;

    Fraction(int n = 0, int d = 1) {
        num = n;
        den = d;
    }

    Fraction add(Fraction f) {
        return Fraction(num * f.den + f.num * den, den * f.den);
    }

    void show() const {
        cout << num << "/" << den << endl;
    }
};

int main() {
    Fraction f1, f2;
    cout << "Enter first fraction (num den): ";
    cin >> f1.num >> f1.den;

    cout << "Enter second fraction (num den): ";
    cin >> f2.num >> f2.den;

    Fraction result = f1.add(f2);
    result.show();

    return 0;
}
