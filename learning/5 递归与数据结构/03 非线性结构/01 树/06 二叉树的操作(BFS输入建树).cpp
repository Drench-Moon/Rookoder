//
// Created by Drench_Moon on 2026/11/10.
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


//  循环录入的条件为什么又要判断queue是否为空，又要判断数组是否走完(后者显然要让数组走完)
//
//  
//  1、输入1 2 3 -1 -1 -1 -1
//      就相当于处理节点1时, 把1的左右子节点赋值2，3并且把节点2和3录入队列, 此时队列非空, 数组没有遍历完, 继续循环
//      然后剩下四个-1就是把2, 3节点的一共四个子节点判断一遍, 由于全都是空, 不会赋值也不会录入队列. 此时 i=7, 队列为恰好为空, 两个条件同时开始不满足, 跳出循环
//
//
//  2、输入1 2 3
//      就是在第一次循环中对根节点的左右子节点赋值为2和3, 然后把这两个节点录入队列, 但是由于每次存入节点到队列里就会 i ++，
//      此时 i 已经到3, 数组数据已经录入完全, 所以不会对第2层的节点2, 3进行处理
//
//
//  3、输入1 2 3 -1 -1 -1 -1 -1 -1 (有多余的-1, 或者在下一层全以-1录入后又出现正常数值)
//      是对2, 3节点操作完之后, 队列已经为空但是数组没有遍历完, 没有多余的节点来装载数组数据, 因此树会断.只有停止循环
//
//
//  总体来看就是省略输入比严格输入少处理一层, 因为数组数据录入完成, 之后的空节点没有必要判断.
//  冗余输入和严格输入的处理次数一样, 但是冗余输入的停止条件只是因为队列为空, 因为数组没有遍历完所以称为"冗余"

//按照BFS顺序输入建树
TreeNode* buildFromBFS(vector<int> &a) {

    //a本身就为空, 或者输入为-1, 返回空指针
    if (a.empty() || a[0] == -1) {
        return nullptr;
    }


    //声明根节点
    auto *root = new TreeNode(a[0]);

    //BFS需要队列, 用于FIFO形式存储多个节点, 需要手动录入临时根节点
    queue<TreeNode*> q;
    q.push(root);

    int i = 1;

    while (!q.empty() && i < a.size()) {

        //每次循环都要设置队首节点为临时父节点, 树的遍历只能递归, 每次遍历的根节点会取队列的下一位
        //弹出队首 + 取队首 = 取队列的下一位
        TreeNode *temp = q.front();
        q.pop();

        if (i < a.size()) {
            if (a[i] != -1) {
                temp -> left = new TreeNode(a[i]);
                q.push(temp -> left);
            }
            //无论是否为空节点都要往后遍历数组数据
            i++;
        }

        //i 可能在声明左子树后不满足条件
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

void preorder(TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    cout << root->val << " ";
    preorder(root -> left);
    preorder(root -> right);
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    TreeNode *root = buildFromBFS(a);

    preorder(root);
    cout << endl;
}