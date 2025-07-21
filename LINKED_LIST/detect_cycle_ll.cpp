#include <iostream>
using namespace std;

/**
 * Definition for singly-linked list node.
 */
struct ListNode {
    int val;
    ListNode *next;
    
    // Constructor
    ListNode(int x) : val(x), next(NULL) {}
};

/**
 * Floyd's Cycle Detection Algorithm
 * This function returns true if a cycle exists in the linked list.
 * It uses two pointers — slow and fast — to detect the loop.
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // Edge case: if list is empty or has only one node, no cycle
        if (head == NULL || head->next == NULL) {
            return false;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        // Move slow by 1 step and fast by 2 steps
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;

            // If they meet, a cycle exists
            if (slow == fast) {
                return true;
            }
        }

        // No cycle detected
        return false;
    }
};

/**
 * Helper function to create a simple linked list.
 * This version allows creating a cycle by specifying the position of the node to loop to.
 */
ListNode* createLinkedListWithCycle(int nodes[], int size, int pos) {
    if (size == 0) return NULL;

    ListNode* head = new ListNode(nodes[0]);
    ListNode* current = head;
    ListNode* cycleNode = NULL;

    for (int i = 1; i < size; ++i) {
        current->next = new ListNode(nodes[i]);
        current = current->next;
        if (i == pos) {
            cycleNode = current;
        }
    }

    // If pos != -1, create a cycle
    if (pos >= 0) {
        current->next = cycleNode;
    }

    return head;
}

int main() {
    Solution sol;

    // Example 1: No cycle
    int arr1[] = {3, 2, 0, -4};
    ListNode* head1 = createLinkedListWithCycle(arr1, 4, -1);
    cout << "List 1 has cycle? " << (sol.hasCycle(head1) ? "Yes" : "No") << endl;

    // Example 2: Cycle exists (pos = 1 means last node connects to node with value 2)
    int arr2[] = {1, 2};
    ListNode* head2 = createLinkedListWithCycle(arr2, 2, 0);
    cout << "List 2 has cycle? " << (sol.hasCycle(head2) ? "Yes" : "No") << endl;

    return 0;
}
