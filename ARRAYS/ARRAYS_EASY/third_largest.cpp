// C++ program to find the third largest
// element in an array.
#include <bits/stdc++.h>
using namespace std;

int thirdLargest(vector<int> &arr) {
    int n = arr.size();
    
    int first = INT_MIN, second = INT_MIN,
    third = INT_MIN;
    
    for (int i=0; i<n; i++) {
        
        // If arr[i] is greater than first,
        // set third to second, second to 
        // first and first to arr[i].
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        }
        
        // If arr[i] is greater than second, 
        // set third to second and second 
        // to arr[i].
        else if (arr[i] > second) {
            third = second;
            second = arr[i];
        }
        
        // If arr[i] is greater than third,
        // set third to arr[i].
        else if (arr[i] > third) {
            third = arr[i];
        }
    }
    
    // Return the third largest element 
    return third;
}

int main() {
    vector<int> arr = {1, 14, 2, 16, 10, 20};
    cout << thirdLargest(arr) << endl;

    return 0;
}