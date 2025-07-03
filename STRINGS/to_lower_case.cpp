#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        // Brute force:
        // Create a new string, check if each char is uppercase
        // If so, convert using ASCII shift and add to new string
        // return new string

        // Optimal: Do it in-place using reference
        for (char &ch : s) {
            if (ch >= 'A' && ch <= 'Z') {
                ch = ch + 32;
            }
        }
        return s;
    }
};

// Client code
int main() {
    Solution sol;
    string s = "HeLLoWORLD";
    cout << "Lowercase: " << sol.toLowerCase(s) << endl;
    return 0;
}
