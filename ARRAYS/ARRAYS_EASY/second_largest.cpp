// C++ program to find second largest element in an array
// using Sorting

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//the easiest approach is first to sort the array and then find the element which is not equal to n-1


// function to find the second largest element-better approach than sorting 

int getSecondLargest(vector<int> &arr)
{
    int n = arr.size();

    // Sort the array in non-decreasing order
    sort(arr.begin(), arr.end());

    // start from second last element as last element is the largest
    for (int i = n - 2; i >= 0; i--)
    {

        // return the first element which is not equal to the
        // largest element
        if (arr[i] != arr[n - 1])
        {
            return arr[i];
        }
    }

    // If no second largest element was found, return -1
    return -1;
}

int main()
{
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    cout << getSecondLargest(arr);
    return 0;
}


