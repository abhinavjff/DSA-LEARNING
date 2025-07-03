// 2. Search Insert Position (Leetcode 35)
#include <iostream>
#include <vector>
using namespace std;

class Solution2 {
public:
    int searchInsert(vector<int>& arr, int target) {
        // Brute force:
        // for (int i = 0; i < arr.size(); i++) {
        //     if (arr[i] >= target) return i;
        // }
        // return arr.size();

        // Optimal Binary Search approach:
        int st = 0, end = arr.size() - 1;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (arr[mid] == target) return mid;
            else if (arr[mid] < target) st = mid + 1;
            else end = mid - 1;
        }
        return st;
    }
};

int main() {
    Solution2 sol;
    vector<int> nums = {1, 3, 5, 6};
    int target = 2;
    cout << "Insert position of " << target << " is: " << sol.searchInsert(nums, target) << endl;
    return 0;
}