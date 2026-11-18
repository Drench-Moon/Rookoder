#include<iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int v) : val(v), left(nullptr), right(nullptr) {}
};


/*
    二叉树的遍历包括: 先序遍历, 中序遍历, 后序遍历, 层序遍历
    都需要递归来完成(循环太麻烦了)
*/


//  1、先序遍历: 遍历规则为 根 -> 左 -> 右    属于深度优先搜索(DFS)
void preorder(TreeNode* x) {          //一个函数, 传入一个节点指针
    if (!x) return;                   //迭代边界:如果是空指针就直接返回
    cout << x -> val << ' ';          //先处理自己,
    preorder(x -> left);              //再递归左树
    preorder(x -> right);             //再递归右树
}


//  2、中序遍历: 遍历规则为 左 -> 根 -> 右    属于深度优先搜索(DFS)
void inorder(TreeNode* x) {
    if (!x) return;
    inorder(x -> left);               //先左树, 再自己, 再右树
    cout << x -> val << ' ';
    inorder(x -> right);
}


//  3、后序遍历: 遍历规则为 左 -> 右 -> 根   属于深度优先搜索(DFS)
void postorder(TreeNode* x) {
    if (!x) return;
    postorder(x -> left);
    postorder(x -> right);
    cout << x -> val << ' ';
}


int main() {

/*      构建一个树

             1
           /   \
          2     3
         / \   /
        4   5 6
*/

    TreeNode* root = new TreeNode(1);
    root -> left = new TreeNode(2);
    root -> right = new TreeNode(3);
    root -> left -> left = new TreeNode(4);
    root -> left -> right = new TreeNode(5);
    root -> right -> left = new TreeNode(6);

    preorder(root);           //先序遍历, 应该输出 1 2 4 5 3 6
    cout << endl;
    inorder(root);            //中序遍历, 应该输出 4 2 5 1 6 3
    cout << endl;
    postorder(root);          //后序遍历, 应该输出 4 5 2 6 3 1

}