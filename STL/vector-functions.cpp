#include<iostream>
#include<vector>
using namespace std;

/*we discuss the different types of functions used for vector manipulation 

1 size 
2 push_back 
3 pop_back
4 front 
5 back 
6 at 
*/
int main ()
{
    vector<int> vec={1,2,3,4,5,6};
    cout<<vec.size()<<endl;

    vector<int> vec1;
    vec1.push_back(1);
    cout<<vec1[0]<<endl;
    
    return 0;
}