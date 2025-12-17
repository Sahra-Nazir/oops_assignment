#include <iostream>
using namespace std;

class Angle {
public:
    int deg;
    float min;
    char dir;

    void input() {
        cin >> deg >> min >> dir;
    }

    void show() const {
        cout << deg << "° " << min << "' " << dir;
    }
};

class Ship {
private:
    static int count;
    int id;
    Angle latitude, longitude;

public:
    Ship() {
        id = ++count;
    }

    void getPosition() {
        cout << "Enter latitude: ";
        latitude.input();
        cout << "Enter longitude: ";
        longitude.input();
    }

    void showPosition() const {
        cout << "Ship " << id << " -> ";
        latitude.show();
        cout << ", ";
        longitude.show();
        cout << endl;
    }
};

int Ship::count = 0;

int main() {
    Ship s;
    s.getPosition();
    s.showPosition();
    return 0;
}
