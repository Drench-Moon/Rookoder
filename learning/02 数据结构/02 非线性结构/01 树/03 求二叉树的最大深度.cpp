//
// Created by Drench_Moon on 2026/11/3.
//
#include<iostream>
#include<algorithm>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int v) : val(v), left(nullptr), right(nullptr) {}
};

int maxDepth(TreeNode* x) {
    if (!x) return 0;         //递归出口: 指针为空, 返回0, 说明层数是0
    return   1   +  max(maxDepth(x -> left), maxDepth(x -> right));
//         当前层  + 左、右子树的最大层数, 每递归一次返回值就会 + 1
}

int main() {
    TreeNode* root = new TreeNode(1);
    root -> left = new TreeNode(2);
    root -> right = new TreeNode(3);
    root -> left -> left = new TreeNode(4);
    root -> right -> left = new TreeNode(5);
    root -> left -> left -> left = new TreeNode(6);           //四层

    int i = maxDepth(root);
    cout << i << endl;
}