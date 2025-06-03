#include<iostream>
#include<vector>
/*this code is used to demonstrate topic of stl namely - vectors 
vector is one of the containers of the STL 
vectors are like arrays but they are not statically allocated and can be dynamically allocated at runtime 


syntax:
vector <int> vec={1,2,3}
vector <int> vector(1,3)
vector <type> vectorname;


*/
using namespace std ;
int main ()
{
    vector<int> vec ={1,2,3}; 
    cout<<vec[0];
    return 0;
    
}