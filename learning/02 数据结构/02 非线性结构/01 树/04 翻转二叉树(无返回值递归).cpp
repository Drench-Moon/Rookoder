#include<iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int v) : val(v), left(nullptr), right(nullptr) {}
};

//见下方main内的树
//翻转之后, 变成
/*

             1
           /   \
          3     2
           \   / \
            6 5   4
                   \
                    7
*/
//每一个节点的左右子节点都要交换
void invert(TreeNode* x) {
    if (!x) return;                                 //递归出口, 如果为空就结束
    swap(x -> left, x -> right);       //交换左右节点
    invert(x -> left);                              //递归左子节点和右子节点
    invert(x -> right);
}

void preorder(TreeNode* x) {
    if (!x) return;
    cout << x -> val << " ";
    preorder(x -> left);
    preorder(x -> right);
}

int main() {

//默认构造如下的树
/*

             1
           /   \
          2     3
         / \   /
        4   5 6
       /
      7
*/

    TreeNode* root = new TreeNode(1);
    root -> left = new TreeNode(2);
    root -> right = new TreeNode(3);
    root -> left -> left = new TreeNode(4);
    root -> left -> right = new TreeNode(5);
    root -> right -> left = new TreeNode(6);
    root -> left -> left -> left = new TreeNode(7);

    preorder(root);
    invert(root);
    cout << endl;
    preorder(root);
}