#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        // Brute force (same as optimal in this case):
        // Check each word and each character inside it
        // If the character matches, store the index

        vector<int> result;

        for (int i = 0; i < words.size(); i++) {
            for (int j = 0; j < words[i].size(); j++) {
                if (words[i][j] == x) {
                    result.push_back(i);
                    break;  // No need to check rest of the word
                }
            }
        }

        return result;
    }
};

// ✅ Client Code
int main() {
    Solution sol;

    vector<string> words = {"apple", "banana", "cherry", "date"};
    char targetChar = 'a';

    vector<int> indices = sol.findWordsContaining(words, targetChar);

    cout << "Words containing '" << targetChar << "' found at indices: ";
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
