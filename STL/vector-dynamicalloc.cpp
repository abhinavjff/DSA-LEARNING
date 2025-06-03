#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    vector<int> vec;
    cout<<vec.size()<<endl;
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(1);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    
    return 0;
}