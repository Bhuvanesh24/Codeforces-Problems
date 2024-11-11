#include <iostream>
#include <algorithm>
using namespace std;
class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) {
        this->val = val;
        left = right = nullptr;
    }
};
class BinaryTree {
public:
    TreeNode* root;
    BinaryTree() {
        root = nullptr;
    }
    int maxDepth(TreeNode* node) {
        if (node == nullptr) {
            return 0;
        }
        int leftDepth = maxDepth(node->left);
        int rightDepth = maxDepth(node->right);
        return max(leftDepth, rightDepth) + 1;
    }
};
int main() {
    BinaryTree tree;
    tree.root = new TreeNode(1);
    tree.root->left = new TreeNode(2);
    tree.root->right = new TreeNode(3);
    tree.root->left->left = new TreeNode(4);
    tree.root->left->right = new TreeNode(5);
    int depth = tree.maxDepth(tree.root);
    cout << "Maximum Depth of the Binary Tree: " << depth << endl;
    return 0;
}
