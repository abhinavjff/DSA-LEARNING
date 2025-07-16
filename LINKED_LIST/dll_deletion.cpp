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

//function to delete only the head of the linked list 


Node* deleteHead(Node* head)
{
    if(head==NULL||head->next==NULL)
    {
        return NULL;
    }
    Node* prev=head;
    head=head->next;
    head->back=nullptr;
    prev->next=nullptr;

    delete prev;
    return head;
}

Node* deleteTail(Node* head)
{
    if(head==NULL||head->next==NULL)
    {
        return NULL;
    }
    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    /*temp has become the new tail and  we make prev the new tail by deleting
    temp which is the old tail 
    */
    Node* prev=temp->back;
    prev->next=nullptr;
    temp->back=nullptr;
    delete temp;
    return head;
}

Node* deleteKthPositionValue(Node* head,int k)
{
    if( head==NULL)
    {
        return NULL;
    }
  
    
    int count=0;
    Node* knode=head; //this node traverses the linked list till the kth position is reached 

    while(knode!=NULL)
    {
        count++;
        if(count==k){break;}
        else knode=knode->next;
    }
    //this while loop finally helps us reach the kth position 

    Node* prev=knode->back;
    Node* front=knode->next;

    if(prev==NULL && front==NULL){
        return NULL;
    }
    else if (prev==NULL){
    return deleteHead(head);
    }
    else if(front==NULL){
    return deleteTail(head);
    }

    prev->next=front;
    front->back=prev;
    knode->next=nullptr;
    knode->back=nullptr;
    delete knode;
    return head;
}

void deleteNode(Node* temp){

    Node* prev= temp->back;
    Node* front=temp->next;
    if(front==NULL){
    prev->next=temp->back=nullptr;
    free(temp);
    return;

    }
    
    prev->next=front;
    front->back=prev;
    temp->next=temp->back=nullptr;
    free(temp);

}
int main()
{
    vector<int> arr={2,5,8,7,9};
    Node* head=convertArrDLL(arr);
    head=deleteHead(head);
    head=deleteTail(head);
    head=deleteKthPositionValue(head,1);
    deleteNode(head->next);
    print(head);
    return 0; 

}