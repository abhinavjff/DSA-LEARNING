#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        // 🔁 Brute Force Approach (Commented)
        /*
        vector<int> temp;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] != 0) {
                temp.push_back(arr[i]);
            }
        }

        int more_zeroes = arr.size() - temp.size();

        for (int i = 0; i < more_zeroes; i++) {
            temp.push_back(0);
        }

        for (int i = 0; i < arr.size(); i++) {
            arr[i] = temp[i];
        }
        */

        // ✅ Optimal Two-Pointer Approach
        // i - slow pointer, tracks the position to place next non-zero
        // j - fast pointer, scans through the array
        int i = 0;
        for (int j = 0; j < arr.size(); j++) {
            if (arr[j] != 0) {
                arr[i] = arr[j];
                i++;
            }
        }

        // Fill the remaining positions with 0
        while (i < arr.size()) {
            arr[i] = 0;
            i++;
        }
    }
};

// 🔍 Client code to test the function
int main() {
    Solution sol;
    vector<int> nums = {0, 1, 0, 3, 12};
    
    sol.moveZeroes(nums);

    cout << "Array after moving zeroes: ";
    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
