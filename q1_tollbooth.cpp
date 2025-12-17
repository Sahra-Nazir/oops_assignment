#include <iostream>
using namespace std;

class TollBooth {
private:
    int cars;
    double money;

public:
    TollBooth() {
        cars = 0;
        money = 0.0;
    }

    void payingCar() {
        cars++;
        money += 0.50;
    }

    void nonPayingCar() {
        cars++;
    }

    void show() const {
        cout << "Total cars : " << cars << endl;
        cout << "Total money: $" << money << endl;
    }
};

int main() {
    TollBooth t;

    t.payingCar();
    t.nonPayingCar();
    t.payingCar();

    t.show();
    return 0;
}
