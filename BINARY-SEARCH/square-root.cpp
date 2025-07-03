// 1. Square Root of a Number (Leetcode 69)
#include <iostream>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        // Brute force (inefficient):
        // for (int i = 1; i <= x; i++) {
        //     if (1LL * i * i == x) return i;
        //     else if (1LL * i * i > x) return i - 1;
        // }

        // Optimal Binary Search approach:
        if (x == 0 || x == 1) return x;
        int st = 1, end = x, ans = 0;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            long long square = 1LL * mid * mid;
            if (square == x) return mid;
            if (square < x) {
                ans = mid;
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    int x = 8;
    cout << "Square root of " << x << " is: " << sol.mySqrt(x) << endl;
    return 0;
}