#include<iostream>
#include<unordered_map>
using namespace std;
int main ()


{
    unordered_map<int,string> mp={{1,"dog"},{2,"cat"},{3,"horses"}, {2,"jesse"}};
    //ways to access the elements
    cout<<mp[1]<<endl;//uses the [] operator 

    cout<<mp.at(2);//uses the .at operator and can use it for updating too

    //using the find operator
    auto it = mp.find(2);
    if(it!=mp.end())
    {
        cout<<it->second<<endl;
    }

    else cout<<"not found";

    return 0;


}