#include <iostream>
using namespace std;

class Employee {
private:
    int id;
    float salary;

public:
    void input() {
        cout << "Enter ID and Salary: ";
        cin >> id >> salary;
    }

    void display() const {
        cout << "ID: " << id << " Salary: " << salary << endl;
    }
};

int main() {
    Employee emp[3];

    for (int i = 0; i < 3; i++) {
        emp[i].input();
    }

    cout << "\nEmployee Details:\n";
    for (int i = 0; i < 3; i++) {
        emp[i].display();
    }

    return 0;
}
