//
// Created by Drench_Moon on 2026/10/25.
//
#include <iostream>
#include <string>
#include <windows.h>
#include <stack>
#include <vector>
#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr){}
};

void preorder(TreeNode* root){
    if (root == nullptr) {
        return;
    }
    cout << root->val << " ";
    preorder (root -> left);
    preorder (root -> right);
}


vector<int> Bfs(TreeNode* root) {

    vector<int> res;
    if (!root) {
        return res;
    }
    queue<TreeNode*> s;
    s.push(root);

    while (!s.empty()) {
        TreeNode* x = s.front();
        s.pop();
        res.push_back(x -> val);

        if (x -> left) {
            s.push(x -> left);
        }
        if (x -> right) {
            s.push(x -> right);
        }
    }
    return res;
}


int main()
{

    auto* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    preorder(root);
    cout << endl;


    vector<int> anomous = Bfs(root);
    for (const auto i :anomous) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}