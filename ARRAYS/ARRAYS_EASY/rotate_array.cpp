// C++ Code to left rotate an array using Reversal Algorithm

#include <bits/stdc++.h>

using namespace std;

// Function to rotate an array by d elements to the left
void rotateArr(vector<int> &arr, int d)
{
    int n = arr.size();


    /*this is the better solution 
    // Storing rotated version of array
    vector<int> temp(n);
     // Copy last n - d elements to the front of temp
    for (int i = 0; i < n - d; i++)
        temp[i] = arr[d + i];

    // Copy the first d elements to the back of temp
    for (int i = 0; i < d; i++)
        temp[n - d + i] = arr[i];

    // Copying the elements of temp in arr
    // to get the final rotated vector
    for (int i = 0; i < n; i++)
        arr[i] = temp[i];*/

        //this is the optimal solution 
        
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.end()-d,arr.end());
    reverse(arr.begin(),arr.end());


}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int d = 6;

    rotateArr(arr, d);

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    return 0;
}