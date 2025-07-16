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
    Node* back;

    public:
    Node(int data1,Node* next1,Node* back1){
        data=data1;
        next=next1;
        back=back1;
    }

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};

Node* convertArrDLL(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}

void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main()
{
    vector<int> arr={2,5,8,7};
    Node* head=convertArrDLL(arr);
    print(head);
    return 0; 

}