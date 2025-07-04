#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string interpret(string command) {
        // Brute force idea:
        // Traverse the string and check:
        // - if current character is 'G', add 'G' to result
        // - if current is '(' and next is ')', add 'o'
        // - if current is '(' and next is 'a', add "al"
        // But using a while loop gives better control.

        // Optimal approach:
        string result = "";
        int i = 0;

        while (i < command.size()) {
            if (command[i] == 'G') {
                result += 'G';
                i++;
            } else if (command[i] == '(' && command[i + 1] == ')') {
                result += 'o';
                i += 2;
            } else if (command[i] == '(' && command[i + 1] == 'a') {
                result += "al";
                i += 4;
            }
        }

        return result;
    }
};

// 🧪 Client Code
int main() {
    Solution sol;
    
    string cmd1 = "G()(al)";
    string cmd2 = "G()()()()(al)";
    string cmd3 = "(al)G(al)()()G";
    
    cout << "Output 1: " << sol.interpret(cmd1) << endl;  // Goal
    cout << "Output 2: " << sol.interpret(cmd2) << endl;  // Gooooal
    cout << "Output 3: " << sol.interpret(cmd3) << endl;  // alGalooG

    return 0;
}
