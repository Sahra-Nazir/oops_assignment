#include <iostream>
using namespace std;

class Serial {
private:
    static int count;
    int number;

public:
    Serial() {
        number = ++count;
    }

    void show() const {
        cout << "Object number: " << number << endl;
    }
};

int Serial::count = 0;

int main() {
    Serial a, b, c;
    a.show();
    b.show();
    c.show();
    return 0;
}
