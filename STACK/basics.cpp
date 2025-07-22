#include <stack>
#include <iostream>
using namespace std;

int main() {
    stack<int> s;
    s.push(10);     // stack: [10]
    s.push(20);     // stack: [10, 20]
    s.push(30);     // stack: [10, 20, 30]

    cout << "Top: " << s.top() << endl;  // 30
    s.pop();     // removes 30
    cout << "Top after pop: " << s.top() << endl;  // 20

    cout << "Is empty? " << s.empty() << endl;  // 0 (false)
    return 0;
}
