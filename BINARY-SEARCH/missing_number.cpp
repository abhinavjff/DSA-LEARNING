// 3. Missing Number (Leetcode 268)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution3 {
public:
    int missingNumber(vector<int>& arr) {
        // Brute force:
        // for (int i = 0; i <= arr.size(); i++) {
        //     if (find(arr.begin(), arr.end(), i) == arr.end()) return i;
        // }

        // Optimal Binary Search (after sorting):
        sort(arr.begin(), arr.end());
        int st = 0, end = arr.size() - 1;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (arr[mid] == mid) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return st;
    }
};

int main() {
    Solution3 sol;
    vector<int> nums = {3, 0, 1};
    cout << "Missing number is: " << sol.missingNumber(nums) << endl;
    return 0;
}
