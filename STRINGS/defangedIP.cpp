#include<iostream>
using namespace std;


class Solution {
public:
    string defangIPaddr(string address) {
        //wthaliburton is this ...it basically is replacing a . with [.]

       string result = "";
       for(int i=0;i<address.size();i++)
       {
        if(address[i]!='.')
        {
            result+=address[i];
        }
        else

        {
            result+="[.]";
        }
       }
        
        return result;
    }
};

int main() {
    Solution sol;
    string ip = "1.1.1.1";
    cout << "Defanged IP: " << sol.defangIPaddr(ip) << endl;
    return 0;
}
