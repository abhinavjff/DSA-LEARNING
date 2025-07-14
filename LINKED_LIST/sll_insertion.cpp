//going to start with deletion of a node in the singly linked list 
/*
SO IN INSERTION OF THE LINKED LIST WE WILL LOOK INTO INSERTING ELEMENTS
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

Node* insertHead(Node* head,int val)
{
    Node* temp=new Node(val,head);
    return temp;
}

Node* insertTail(Node* head,int val )
{
    if(head==NULL) {return new Node(val);}

    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    Node *newnode=new Node(val); //THERE IS NO POINTER HENCE IT IS A TAIL NODE AS IT POINTS TO NULL POINTER 
    temp->next=newnode;
    return head;
}

Node* insertK(Node* head,int el,int k )
{

    if(head==NULL){
        if(k==1){
            return new Node(el);
        }
        else{
            return head; 
        }
    }
    if(k==1)
    {
        return new Node(el,head);
    }
    int count=0;
    Node* temp=head;
    while(temp!=NULL){
        count++;
        if(count==(k-1)){
            Node* newnode=new Node(el,temp->next);
            temp->next=newnode;
            break;
        }
        temp=temp->next;
    }
    return head;

}

Node* insertElementBeforeValue(Node* head,int el,int val )
{

    if(head==NULL){
    return NULL;
    }
    if(head->data==val)
    {
        return new Node(el,head);
    }

    Node* temp=head;
    while(temp->next!=NULL){
        if(temp->next->data==val)
        {
            Node* newnode=new Node(el,temp->next);
            temp->next=newnode;
            break;

        }
        temp=temp->next;
    }
    return head;

}


int main()
{
    vector<int> arr={2,5,8,7,9,10,12};

    Node* head=ConvertArrToLL(arr);

    
    //INSERT THE VALUE 3 AND MAKE IT POINT TO HEAD 
    head=insertHead(head,3);  //can simply replace it with head=new Node(100,head)
    print(head);

    //INSERT THE VALUE AT THE TAIL AND PRINT ALL ELEMENTS 
    head=insertTail(head,100);
    print(head);
    
    //INSERT THE ELEMENT 99 AT THE FIRST POSITION OF THE LINKED LIST 
    head=insertK(head,99,1);
    print(head);

    //INSERT THE ELEMENT BEFORE THE ELEMENT WHOSE VALUE IS in the FUNCTION 
    head=insertElementBeforeValue(head,98,99);
    print(head);
    

}