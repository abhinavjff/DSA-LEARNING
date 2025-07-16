#include <bits/stdc++.h>
using namespace std;

// ------------------ NODE STRUCTURE ------------------

struct Node {
    int data;
    Node* next;
    Node* back;

    // Constructor
    Node(int data1, Node* next1 = nullptr, Node* back1 = nullptr) {
        data = data1;
        next = next1;
        back = back1;
    }
};

// ------------------ INSERTION FUNCTIONS ------------------

// 1. Insert at HEAD
Node* insertAtHead(Node* head, int val) {
    Node* newHead = new Node(val, head, nullptr);
    if (head != nullptr)
        head->back = newHead;
    return newHead;
}

// 2. Insert at TAIL
Node* insertAtTail(Node* head, int val) {
    if (head == nullptr)
        return new Node(val);

    Node* temp = head;
    while (temp->next != nullptr)
        temp = temp->next;

    Node* newNode = new Node(val, nullptr, temp);
    temp->next = newNode;

    return head;
}

// 3. Insert at K-th Position (1-based)
Node* insertAtKthPosition(Node* head, int k, int val) {
    if (k <= 1 || head == nullptr)
        return insertAtHead(head, val);

    Node* temp = head;
    int count = 1;

    while (temp != nullptr && count < k - 1) {
        temp = temp->next;
        count++;
    }

    if (temp == nullptr || temp->next == nullptr)
        return insertAtTail(head, val);

    Node* front = temp->next;
    Node* newNode = new Node(val, front, temp);
    temp->next = newNode;
    front->back = newNode;

    return head;
}

// 4. Insert AFTER a given node
void insertAfterNode(Node* node, int val) {
    if (node == nullptr) return;

    Node* front = node->next;
    Node* newNode = new Node(val, front, node);
    node->next = newNode;

    if (front != nullptr)
        front->back = newNode;
}


// Function to print list from head
void printForward(Node* head) {
    cout << "List (head to tail): ";
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}





int main() {
    Node* head = nullptr;

    cout << "Inserting at head...\n";
    head = insertAtHead(head, 10);
    head = insertAtHead(head, 5);
    printForward(head);

    cout << "\nInserting at tail...\n";
    head = insertAtTail(head, 15);
    head = insertAtTail(head, 20);
    printForward(head);

    cout << "\nInserting at 3rd position (value = 99)...\n";
    head = insertAtKthPosition(head, 3, 99);
    printForward(head);

    cout << "\nInserting after 2nd node (value = 42)...\n";
    if (head != nullptr && head->next != nullptr)
        insertAfterNode(head->next, 42); // after 2nd node
    printForward(head);

    cout << "\nFinal state of the list (in both directions):\n";
    printForward(head);
    

    return 0;
}
