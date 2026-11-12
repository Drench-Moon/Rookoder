//
// Created by Drench_Moon on 2026/11/11.
//
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr){}
};

TreeNode* buildFromBFS(vector<int> &arr) {
    if (arr.empty() || arr[0] == -1) {
        return nullptr;
    }
    auto* root = new TreeNode(arr[0]);
    queue<TreeNode*> q;
    q.push(root);

    int i = 1;
    while (!q.empty() && i < arr.size()) {
        TreeNode* node = q.front();
        q.pop();

        if (i < arr.size()) {
            if (arr[i] != -1) {
                node -> left = new TreeNode(arr[i]);
                q.push(node -> left);
            }
            ++ i;
        }
        if (i < arr.size()) {
            if (arr[i] != -1) {
                node -> right = new TreeNode(arr[i]);
                q.push(node -> right);
            }
            ++i;
        }
    }
    return root;
}

vector<int> BFS(TreeNode* root) {
    vector<int> res;
    if (root == nullptr) {
        return res;
    }
    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* temp = q.front();
        res.push_back(temp->val);
        q.pop();

        if (temp -> left) {
            q.push(temp -> left);
        }

        if (temp -> right) {
            q.push(temp -> right);
        }
    }
    return res;
}

int main() {
    vector<int> a = {1,2,3,4,5};
    TreeNode* root = buildFromBFS(a);

    vector<int> res = BFS (root);
    for (int i : res) {
        cout<<i<<" ";
    }
}