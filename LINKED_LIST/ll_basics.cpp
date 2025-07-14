/*
linked lists store elements in a non-contiguous manner 
LINKED lists applications - used in web browser

they have 2 main features that define it 
1)data
2)link or pointer to the next element 

so because we have 2 features we must have a user-defined data structure which will have both of them 
so we need 'STRUCT'
and a constructor to call it 
*/

#include<bits/stdc++.h>
using namespace std;
struct Node{ //can use CLASS ALSO
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* ConvertArrToLL(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    //iterate
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }

    return head;
}

int lengthOfLL(Node* head)
{
    int count=0;
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
        count++;
    }
    return count;
}


int checkForValue(Node* head,int val)
{
    Node* temp=head;
    while(temp){
        if(temp->data==val){return 1;}
        temp=temp->next;
    }
    return 0;
}
int main()
{
    vector<int> arr={2,5,8,7};
    Node* head=ConvertArrToLL(arr);
    cout<<"head is "<<head->data<<endl;
    cout<<"length is "<<lengthOfLL(head)<<endl;
    cout<<checkForValue(head,5);
}