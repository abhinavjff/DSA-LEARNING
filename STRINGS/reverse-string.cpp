#include <iostream>
#include <vector>
using namespace std;

class Solution2 {
public:
    void reverseString(vector<char>& s) {
        // Brute force:
        // Create a new vector and push elements from back to front

        // Optimal: Two pointer swap
        int i = 0, j = s.size() - 1;
        while (i < j) {
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
};

// Client code
int main() {
    Solution2 sol;
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    sol.reverseString(s);
    cout << "Reversed: ";
    for (char c : s) cout << c;
    cout << endl;
    return 0;
}
