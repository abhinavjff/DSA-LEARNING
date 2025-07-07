#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans = "";
        int spaces = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                spaces++;
                if (spaces == k)
                    break;
            }
            ans.push_back(s[i]);
        }
        return ans;
    }
};

int main() {
    // Client code
    Solution sol;

    // Simulate input
    string sentence;
    int k;

    cout << "Enter a sentence: ";
    getline(cin, sentence); // Use getline to allow spaces

    cout << "Enter the number of words to keep: ";
    cin >> k;

    string result = sol.truncateSentence(sentence, k);

    cout << "\nTruncated Sentence:\n" << result << endl;

    return 0;
}
