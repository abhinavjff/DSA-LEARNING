#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int> arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        
        // Case 1: Product of top 3 largest elements
        int product1 = arr[n-1] * arr[n-2] * arr[n-3];
        
        // Case 2: Product of 2 smallest and the largest (handles negatives)
        int product2 = arr[0] * arr[1] * arr[n-1];
        
        return max(product1, product2);
    }
};

int main() {
    Solution sol;
    
    // Example input
    vector<int> arr = {10, 3, 5, 6, 20};

    // Call the function
    int result = sol.maxProduct(arr);

    // Output the result
    cout << "Maximum Collective Ability: " << result << endl;

    return 0;
}
