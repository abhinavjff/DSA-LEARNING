#include <iostream>
#include <string>
using namespace std;

/*
    Problem: Merge two strings alternately.
    For example:
    Input: word1 = "abc", word2 = "pqr"
    Output: "apbqcr"

    If one string is longer, append the remaining part at the end.
    For example:
    word1 = "ab", word2 = "pqrs"
    Output: "apbqrs"
*/

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result="";

        int minimum=min(word1.length(),word2.length());
        int maximum=max(word1.length(),word2.length());
        for(int i=0;i<minimum;i++)
        {
            //merge when there is 
            result.push_back(word1[i]);
            result.push_back(word2[i]);

        }
        //push the remaining characters of the string into result and then return string result 

        for(int j=minimum;j<maximum;j++)
        {
            int minimum=min(word1.length(),word2.length());
            if(word1.length()==word2.length()){
                break;
            }
            else if(word1.length()>word2.length()){
                result.push_back(word1[j]);
            }
            else 
            {
                result.push_back(word2[j]);
            }
        }
        return result;
        
    }
};

// --------- Client code / Main function to test the solution ---------
int main() {
    Solution solution;

    // Sample test cases
    string word1 = "abc";
    string word2 = "pqr";
    cout << "Merged result of \"" << word1 << "\" and \"" << word2 << "\": ";
    cout << solution.mergeAlternately(word1, word2) << endl;

    word1 = "ab";
    word2 = "pqrs";
    cout << "Merged result of \"" << word1 << "\" and \"" << word2 << "\": ";
    cout << solution.mergeAlternately(word1, word2) << endl;

    word1 = "abcd";
    word2 = "pq";
    cout << "Merged result of \"" << word1 << "\" and \"" << word2 << "\": ";
    cout << solution.mergeAlternately(word1, word2) << endl;

    return 0;
}
