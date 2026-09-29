#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    float totalMarks;

public:
    Student(string n = "", float m = 0.0) {
        name = n;
        totalMarks = m;
    }
    bool operator>(const Student& s) const {
        return totalMarks > s.totalMarks;
    }
    string getName() const {
        return name;
    }

    float getMarks() const {
        return totalMarks;
    }
};

int main() {
    Student s1("Alice", 88.5);
    Student s2("Bob", 92.0);

    if (s1 > s2) {
        cout << s1.getName() <<s1.getMarks() << " has higher marks than "
             << s2.getName() <<s2.getMarks()  << endl;
    } else if (s2 > s1) {
        cout << s2.getName() <<s2.getMarks() << " has higher marks than "
             << s1.getName() <<s1.getMarks() << endl;
    } else {
        cout << "Both students have equal marks." << endl;
    }

    return 0;
}