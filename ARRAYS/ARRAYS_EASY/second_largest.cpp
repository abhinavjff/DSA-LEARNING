// C++ program to find second largest element in an array
// using Sorting

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//the easiest approach is first to sort the array and then find the element which is not equal to n-1
/* sort(arr.begin(), arr.end());
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] != arr[n - 1])
        {
            return arr[i];
        }
    }
    return -1;*/


// function to find the second largest element-better approach than sorting 

int getSecondLargest(vector<int> &arr)
{
    int n = arr.size();
    int largest=-1;
    int secondlargest=-1;

    // Sort the array in non-decreasing order
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];
    }

    // finding the second largest element
    for (int i = 0; i < n; i++) {

        // Update second largest if the current element is greater
        // than second largest and not equal to the largest
        if (arr[i] > secondlargest && arr[i] != largest) {
            secondlargest = arr[i];
        }
    }
    return secondlargest;
}

int main()
{
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    cout << getSecondLargest(arr);
    return 0;
}


