#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n]={1,2,3,4,5};
    //first learn how to print the subarrays carefully 

    for(int st=0;st<n+1;st++)
    {
        for(int end=st;end<n+1;end++){
            for(int i=st;i<end;i++){
                cout<<arr[i];
            }
        cout<<" ";
        }
    cout<<endl;
    }

}