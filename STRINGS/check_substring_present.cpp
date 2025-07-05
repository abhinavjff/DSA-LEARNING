#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Leetcode 1967: Number of Strings That Appear as Substrings in Word
class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        // Brute Force (Concept):
        // For each pattern, check manually if it appears in the word
        // by matching every index using nested loops (inefficient for large strings)

        // Optimal Solution:
        // Use the built-in find() function to check if the pattern exists in word
        int count = 0;
        for (int i = 0; i < patterns.size(); i++) {
            if (word.find(patterns[i]) != string::npos) {
                count++;
            }
        }
        return count;
    }
};

// ✅ Client Code
int main() {
    Solution sol;
    vector<string> patterns = {"a", "abc", "bc", "d"};
    string word = "abc";
    
    int result = sol.numOfStrings(patterns, word);
    cout << "Number of patterns that appear in the word: " << result << endl;

    return 0;
}
