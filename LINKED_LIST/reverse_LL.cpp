#include <iostream>
using namespace std;

// Definition of singly linked list node
struct ListNode {
    int val;
    ListNode* next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

// Reverse a singly linked list
ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* current = head;

    while (current) {
        ListNode* nextNode = current->next; // store next
        current->next = prev;               // reverse link
        prev = current;                     // move prev
        current = nextNode;                 // move current
    }

    return prev; // new head of reversed list
}

// Utility to insert a node at the end
void insert(ListNode*& head, int val) {
    if (!head) {
        head = new ListNode(val);
        return;
    }
    ListNode* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = new ListNode(val);
}

// Utility to print a list
void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

// Client code
int main() {
    ListNode* head = nullptr;

    // Create list: 1 -> 2 -> 3 -> 4 -> 5
    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);

    cout << "Original List: ";
    printList(head);

    ListNode* reversed = reverseList(head);

    cout << "Reversed List: ";
    printList(reversed);

    return 0;
}
