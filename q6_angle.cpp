#include <iostream>
using namespace std;

class Angle {
private:
    int degrees;
    float minutes;
    char direction;

public:
    void input() {
        cout << "Enter degrees, minutes, direction: ";
        cin >> degrees >> minutes >> direction;
    }

    void show() const {
        cout << degrees << "° " << minutes << "' " << direction << endl;
    }
};

int main() {
    Angle a;
    a.input();
    a.show();
    return 0;
}
