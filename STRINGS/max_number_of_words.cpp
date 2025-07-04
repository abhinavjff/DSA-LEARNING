#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        // Brute force logic:
        // For each sentence:
        //   Count number of spaces -> number of words = space count + 1
        //   Track the max number of words seen across all sentences

        int maxwords = 0;

        for (int i = 0; i < sentences.size(); i++) {
            int count = 0;

            for (int j = 0; j < sentences[i].size(); j++) {
                if (sentences[i][j] == ' ') {
                    count++;
                }
            }

            maxwords = max(maxwords, count + 1);
        }

        return maxwords;
    }
};

int main() {
    Solution sol;
    
    vector<string> sentences1 = {
        "alice and bob love leetcode",
        "i think so too",
        "this is great thanks very much"
    };

    vector<string> sentences2 = {
        "hello world",
        "this is a test",
        "leetcode"
    };

    cout << "Test 1: " << sol.mostWordsFound(sentences1) << endl;  // Output: 6  
    cout << "Test 2: " << sol.mostWordsFound(sentences2) << endl;  // Output: 4

    return 0;
}
