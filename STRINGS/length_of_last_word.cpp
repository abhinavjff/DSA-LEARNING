#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        // Optimal approach:
        // Step 1: Skip trailing spaces
        // Step 2: Count characters until another space is found (or start of string)
        
        int count = 0;
        int i = s.size() - 1;

        // Skip trailing spaces
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        // Count the length of the last word
        while (i >= 0 && s[i] != ' ') {
            count++;
            i--;
        }

        return count;
    }
};

int main() {
    Solution sol;
    
    string s1 = "Hello World";
    string s2 = "   fly me   to   the moon  ";
    string s3 = "a";
    string s4 = "Today is a beautiful day   ";

    cout << "Length of last word in s1: " << sol.lengthOfLastWord(s1) << endl;  // Output: 5
    cout << "Length of last word in s2: " << sol.lengthOfLastWord(s2) << endl;  // Output: 4
    cout << "Length of last word in s3: " << sol.lengthOfLastWord(s3) << endl;  // Output: 1
    cout << "Length of last word in s4: " << sol.lengthOfLastWord(s4) << endl;  // Output: 3

    return 0;
}
