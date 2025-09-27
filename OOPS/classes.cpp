#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;       // private: can’t access directly outside class

public:
    string name;      // public: can access directly

    void setRollNo(int r) {   // public setter
        rollNo = r;
    }

    int getRollNo() {         // public getter
        return rollNo;
    }
};

int main() {
    Student s1;
    s1.name = "Abhinav";       // allowed (public)
    // s1.rollNo = 101;        // ❌ error (private)

    s1.setRollNo(101);         // ✅ use setter
    cout << s1.name << " " << s1.getRollNo() << endl;
}
