//going to start with deletion of a node in the singly linked list 
/*
SO IN DELETION OF THE LINKED LIST WE WILL LOOK INTO DELETING 
1)HEAD 
2)TAIL
3)Kth POSITION 
4)VALUE 
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

void print(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
Node* deletehead(Node* head)
{
    if(head==NULL){return head;}
    Node* temp=head;
    head=head->next;
    free(temp);
    return head;
}

Node* deleteTail(Node* head)
{
    if(head==NULL || head->next==NULL) return NULL;//either an empty linked list or a linked list with only one node 
    Node* temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    free(temp->next);
    temp->next=nullptr;
    return head;
}

Node* deleteK(Node* head,int k)
{

    if(head==NULL){return head;}
    if(k==1)  
    {
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    int count=0;
    Node* temp=head;
    Node* prev=NULL;

    while(temp!=NULL)
    {
        count++;
    if(count==k)
    {
        prev->next=prev->next->next;
        free(temp);
        break;
    }
    prev=temp;
    temp=temp->next;
    }
    return head;    
}

Node* deleteElement(Node* head,int el)
{

    if(head==NULL){return head;}
    if(head->data==el)  
    {
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    Node* temp=head;
    Node* prev=NULL;

    while(temp!=NULL){
    if(temp->data==el){
        prev->next=prev->next->next;
        free(temp);
        break;
        }
    prev=temp;
    temp=temp->next;
    }
    return head;    
}

int main()
{
    vector<int> arr={2,5,8,7,9,10,12};

    Node* head=ConvertArrToLL(arr);

    //REMOVE THE HEAD AND RETURN THE LINKED LIST ie 5,8,7,9,10,12
    head=deletehead(head);  
    print(head);

    //REMOVE THE TAIL AND RETURN THE LINKED LIST ie 5,8,7,9,10
    head=deleteTail(head);
    print(head);
    
    //REMOVE THE SECOND ELEMENT IN THE LINKED LIST AMONG  5,8,7,9,10 TO GET  5,7,9,10
    head=deleteK(head,2);
    print(head);

    //REMOVE THE VALUE 9 TO GET 5,7,10
    head=deleteElement(head,9);
    print(head);
    

}