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

// Merge two sorted linked lists
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    // Dummy node to simplify handling the head
    ListNode* merged = new ListNode(-1);
    ListNode* current = merged;

    // Traverse both lists and append the smaller node
    while (list1 && list2) {
        if (list1->val < list2->val) {
            current->next = list1;
            list1 = list1->next;
        } else {
            current->next = list2;
            list2 = list2->next;
        }
        current = current->next;
    }

    // Attach remaining nodes
    if (list1) current->next = list1;
    if (list2) current->next = list2;

    // Return the merged list (skipping dummy node)
    return merged->next;
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
    ListNode* list1 = nullptr;
    ListNode* list2 = nullptr;

    // Create sorted list1: 1 -> 3 -> 5
    insert(list1, 1);
    insert(list1, 3);
    insert(list1, 5);

    // Create sorted list2: 2 -> 4 -> 6
    insert(list2, 2);
    insert(list2, 4);
    insert(list2, 6);

    cout << "List 1: ";
    printList(list1);
    cout << "List 2: ";
    printList(list2);

    ListNode* merged = mergeTwoLists(list1, list2);
    cout << "Merged List: ";
    printList(merged);

    return 0;
}
