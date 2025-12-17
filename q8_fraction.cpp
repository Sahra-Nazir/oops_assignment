#include <iostream>
using namespace std;

class Fraction {
private:
    int num, den;

public:
    Fraction(int n = 0, int d = 1) {
        num = n;
        den = d;
    }

    Fraction add(Fraction f) {
        return Fraction(num * f.den + f.num * den,
                        den * f.den);
    }

    void show() const {
        cout << num << "/" << den << endl;
    }
};

int main() {
    Fraction f1(1, 2), f2(1, 4);
    Fraction sum = f1.add(f2);
    sum.show();
    return 0;
}
