#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    void getDate() {
        cout << "Enter date (dd mm yyyy): ";
        cin >> day >> month >> year;
    }

    void showDate() const {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date d;
    d.getDate();
    d.showDate();
    return 0;
}
