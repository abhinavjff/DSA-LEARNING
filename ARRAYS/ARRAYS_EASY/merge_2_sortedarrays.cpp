#include <iostream>
#include <vector>
using namespace std;

/*
-----------------------------------
BRUTE FORCE APPROACH (Commented Out)
-----------------------------------
// Time Complexity: O((m + n) log(m + n))
// Space Complexity: O(m + n)

// void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//     vector<int> result;
//     for (int i = 0; i < m; i++) result.push_back(nums1[i]);
//     for (int j = 0; j < n; j++) result.push_back(nums2[j]);
//     sort(result.begin(), result.end());
//     for (int i = 0; i < m + n; i++) nums1[i] = result[i];
// }
*/

class Solution {
public:
    // OPTIMAL IN-PLACE APPROACH
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }

        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};

int main() {
    // Sample input
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> nums2 = {2, 5, 6};
    int n = 3;

    // Create object of Solution class
    Solution sol;
    sol.merge(nums1, m, nums2, n);

    // Output the result
    cout << "Merged sorted array: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
