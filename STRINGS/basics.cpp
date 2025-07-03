#include<iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[]={'a','b','c','\0'};
    char str2[]="abhinav";

    cout<<str<<endl;
    cout<<strlen(str)<<endl;
    
    //str2 
    cout<<str2[2]<<endl;
    cout<<str2[7]<<endl;

    

    // why we use cin.getline instead of cin only because the cin function ignores input after it encounters a SPACEEEEEEEEEEEEEE
    char str3[100];
    cout<<"enter the sentence"<<endl;
    cin>>str3;
    cout<<"output: "<<str3<<endl;

    cin.getline(str3,100);
    cout<<"output : "<<str3<<endl;
    return 0;
}