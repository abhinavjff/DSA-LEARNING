#include<iostream>
using namespace std;
int main ()
{
    
    int a=5;
    int* ptr=&a;
    int** ptr1=&ptr;
    cout<<ptr1;
    cout<<ptr;
    
}