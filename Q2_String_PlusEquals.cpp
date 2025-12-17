#include <iostream>
#include <cstring>
using namespace std;

class MyString {
    char str[100];

public:
    MyString(const char s[] = "") {
        strcpy(str, s);
    }

    MyString& operator+=(MyString s) {
        strcat(str, s.str);
        return *this;
    }

    void show() {
        cout << str << endl;
    }
};

int main() {
    MyString s1("Hello ");
    MyString s2("World");
    MyString s3;

    s3 = s1 += s2;

    s1.show();
    s3.show();
    return 0;
}
