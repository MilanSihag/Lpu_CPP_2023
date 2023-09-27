#include <iostream>
using namespace std;

class Shape {
    string type;
    int sides;

public:
    Shape(string t = "Unknown", int s = 0) {
        type = t;
        sides = s;
    }

    void displayInfo() {
        cout << "Type: " << type << ", Sides: " << sides << endl;
    }
};

int main() {
    Shape s1;
    s1.displayInfo();

    Shape s2("Triangle", 3);
    s2.displayInfo();

    return 0;
}
