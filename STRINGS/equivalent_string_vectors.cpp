#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        // Brute Force (still optimal for small inputs):
        // Join all strings from word1 into result1
        // Join all strings from word2 into result2
        // Compare both

        string result1 = "";
        string result2 = "";

        for (int i = 0; i < word1.size(); i++) {
            result1 += word1[i];
        }

        for (int j = 0; j < word2.size(); j++) {
            result2 += word2[j];
        }

        return result1 == result2;
    }
};

int main() {
    Solution sol;

    vector<string> word1 = {"ab", "c"};
    vector<string> word2 = {"a", "bc"};

    bool result = sol.arrayStringsAreEqual(word1, word2);
    cout << (result ? "True" : "False") << endl;  // Output: True

    return 0;
}
