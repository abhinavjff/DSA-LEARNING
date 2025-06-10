#include<iostream>
#include<unordered_map>
using namespace std;
int main ()
{
    //initialization 
    
    unordered_map<int,string> up={{1,"abhinav"},{2,"jesus"},{3,"Radha"}};


    //traversal 


    for(auto i=up.begin();i!=up.end();i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
}