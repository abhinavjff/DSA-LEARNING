#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        // ❌ Brute force idea (not implemented):
        // For each index i in 0..n:
        //     Loop through indices[j] to find where i == indices[j]
        //     Append s[j] to result
        // -> Time complexity: O(n^2)

        // ✅ Optimal Approach:
        // Directly place each character of s at its correct position using indices[]
        // Time complexity: O(n)

        string result(s.size(), ' '); // initialize string with n spaces
        for (int i = 0; i < s.size(); i++) {
            result[indices[i]] = s[i]; // place s[i] at correct position
        }
        return result;
    }
};

// ✅ Client code to test it
int main() {
    Solution sol;
    string s = "codeleet";
    vector<int> indices = {4, 5, 6, 7, 0, 2, 1, 3};

    string restored = sol.restoreString(s, indices);
    cout << "Restored string: " << restored << endl; // Output: leetcode

    return 0;
}
