#include <iostream>
using namespace std;

enum Etype {
    LABORER = 1,
    SECRETARY,
    MANAGER,
    OTHER
};

class Employee {
private:
    int empNo;
    float salary;
    Etype type;

public:
    void input() {
        int t;
        cout << "Enter employee number and salary: ";
        cin >> empNo >> salary;

        cout << "Enter employee type (1-4): ";
        cin >> t;
        type = (Etype)t;
    }

    void show() const {
        cout << "EmpNo: " << empNo << " Salary: " << salary << " Type: ";
        if (type == LABORER) cout << "Laborer";
        else if (type == SECRETARY) cout << "Secretary";
        else if (type == MANAGER) cout << "Manager";
        else cout << "Other";
        cout << endl;
    }
};

int main() {
    Employee e;
    e.input();
    e.show();
    return 0;
}
