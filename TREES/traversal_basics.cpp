#include <iostream>
#include <vector>
using namespace std;

// ---------------------------
// Definition of a Tree Node
// ---------------------------
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// ---------------------------
// Traversals (Recursive DFS)
// ---------------------------

// Preorder: Root → Left → Right
void preorder(TreeNode* root, vector<int>& result) {
    if (!root) return;
    result.push_back(root->val);          // Visit root first
    preorder(root->left, result);         // Then go left
    preorder(root->right, result);        // Finally go right
}

// Inorder: Left → Root → Right
void inorder(TreeNode* root, vector<int>& result) {
    if (!root) return;
    inorder(root->left, result);          // Go left first
    result.push_back(root->val);          // Then visit root
    inorder(root->right, result);         // Then go right
}

// Postorder: Left → Right → Root
void postorder(TreeNode* root, vector<int>& result) {
    if (!root) return;
    postorder(root->left, result);        // Left first
    postorder(root->right, result);       // Right second
    result.push_back(root->val);          // Visit root last
}

// ---------------------------
// Helper function to print a traversal result
// ---------------------------
void printTraversal(const vector<int>& result, string name) {
    cout << name << ": ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;
}

// ---------------------------
// Client Code (main function)
// ---------------------------
int main() {
    /*
        Constructing the following binary tree:

                 1
               /   \
              2     3
             / \   / \
            4   5 6   7
    */

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    // Store results
    vector<int> pre, in, post;

    // Perform traversals
    preorder(root, pre);
    inorder(root, in);
    postorder(root, post);

    // Print results
    printTraversal(pre, "Preorder");   // Expected: 1 2 4 5 3 6 7
    printTraversal(in, "Inorder");     // Expected: 4 2 5 1 6 3 7
    printTraversal(post, "Postorder"); // Expected: 4 5 2 6 7 3 1

    return 0;
}
