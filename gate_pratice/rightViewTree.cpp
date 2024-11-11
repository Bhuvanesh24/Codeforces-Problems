#include <iostream>
#include <queue>
#include <vector>
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
    vector<int> rightView(TreeNode* root) {
        vector<int> result;
        if (root == nullptr) return result;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int levelSize = q.size();
            for (int i = 0; i < levelSize; i++) {
                TreeNode* current = q.front();
                q.pop();
                if (i == levelSize - 1) {
                    result.push_back(current->val);
                }
                if (current->left != nullptr) q.push(current->left);
                if (current->right != nullptr) q.push(current->right);
            }
        }

        return result;
    }
};
int main() {
    BinaryTree tree;
    tree.root = new TreeNode(1);
    tree.root->left = new TreeNode(2);
    tree.root->right = new TreeNode(3);
    tree.root->left->right = new TreeNode(5);
    tree.root->right->right = new TreeNode(4);
    vector<int> rightView = tree.rightView(tree.root);
    cout << "Right View of the Binary Tree: ";
    for (int val : rightView) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
