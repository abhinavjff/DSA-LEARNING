#include<iostream>
#include<vector>
using namespace std;

/*so for vectors we have something called an iterator in vector 
for (int iterator :vec){}

it is also called a "for each " looop
*/
int main ()
{
    vector<int> vec={1,2,3,4,5,6};
    for(int i : vec)
    
    {
        cout<<i<<endl;
    }
    
    return 0;
}