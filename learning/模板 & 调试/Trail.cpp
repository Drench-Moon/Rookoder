//
// Created by Drench_Moon on 2026/11/11.
//
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class TreeNode {
    public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr){}
};


TreeNode* BuildFromBFS(const vector<int> &a) {
    if (a.empty() || a[0] == -1) {
        return nullptr;
    }
    auto *root = new TreeNode(a[0]);
    queue<TreeNode *> q;
    q.push(root);

    int i = 1;
    while (!q.empty() && i < a.size()) {
        TreeNode *temp = q.front();
        q.pop();

        if (i < a.size()) {
            if (a[i] != -1) {
                temp -> left = new TreeNode(a[i]);
                q.push(temp -> left);
            }
            i ++;
        }

        if (i < a.size()) {
            if (a[i] != -1) {
                temp -> right = new TreeNode(a[i]);
                q.push(temp -> right);
            }
            i ++;
        }
    }

    return root;
}


vector<int> BFS(TreeNode * root) {
    vector<int> res;
    if (!root) return res;

    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty()) {
        TreeNode *temp = q.front();
        q.pop();
        res.push_back(temp -> val);
        if (temp -> left) q.push(temp -> left);
        if (temp -> right) q.push(temp -> right);
    }
    return res;
}

int main() {
    vector<int> a;
    int x;

}
