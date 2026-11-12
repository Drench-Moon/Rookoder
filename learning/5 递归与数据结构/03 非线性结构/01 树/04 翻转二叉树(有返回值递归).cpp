//
// Created by Drench_Moon on 2026/11/6.
//
#include<iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int v) : val(v), left(nullptr), right(nullptr) {}
};

TreeNode* invertTree(TreeNode* root) {        //传入一个根节点(用TreeNode* 定义), 返回一个根节点
    if (!root) {
        return nullptr;                       //如果根为空指针, 就返回空指针(或者直接返回root)
    }
    TreeNode* left = invertTree(root -> left);            //声明一个节点, 用于暂存记录交换后的左子树节点
    TreeNode* right = invertTree(root -> right);          //声明一个节点, 用于暂存记录交换后的右子树节点

    root -> left = right;                                //左子树接右节点
    root -> right = left;                                //右子树接左节点
    return root;
}

//  以上过程举例    A
//              /  \
//             B    C
//                                                递归B的左子节点, 判断为空, 返回空指针到B的左节点递归值
//                                             /
//                    递归A的左子节点B, 判断B不是空 —— 递归B的右子节点, 判断为空, 返回空指针到B的右节点递归值, 交换两个空指针
//                   /     (当前的root为B)       \
//                  /                            把root B返回到A的左节点递归值
//                 /
// 传入A, 判断A不是空
//  (第一层root为A)  \
//                  \                             递归C的左子节点, 判断为空, 返回空指针到C的左节点递归值
//                   \                         /
//                    递归A的右子节点C, 判断C不是空 —— 递归C的右子节点, 判断为空, 返回空指针到B的右节点递归值, 交换两个空指针
//                         (当前的root为C)      \
//                                                把root C返回到A右节点的递归值, 此时A变为上层root, 交换B和C两个指针, 并返回A
//总体来看是从最下层向上递归交换
//而下面的代码是从上往下递归交换


TreeNode* invertTree_up_to_down(TreeNode* root) {
    if (!root) {
        return nullptr;
    }
    swap(root->left, root->right);      //每过一层就交换一次
    invertTree_up_to_down(root->left);               //递归翻转左子树
    invertTree_up_to_down(root->right);              //递归翻转右子树
    return root;
}


void inorder(TreeNode* root) {
    if (!root) {
        return;
    }
    inorder(root -> left);
    cout << root -> val << " ";
    inorder(root -> right);
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
    TreeNode* root = new TreeNode(1);
    root -> left = new TreeNode(2);
    root -> right = new TreeNode(3);
    root -> left -> left = new TreeNode(4);
    root -> left -> right = new TreeNode(5);
    root -> right -> left = new TreeNode(6);
    root -> left -> left -> left = new TreeNode(7);


    inorder(root);             //正常中序遍历输出应为   7 4 2 5 1 6 3
    cout << endl;

    TreeNode* inverted_root = invertTree(root);
    inorder(inverted_root);
    cout << endl;             //翻转后为    3 6 1 5 2 4 7,    翻转后的输出为原输出的逆序

    inverted_root = invertTree_up_to_down(inverted_root);
    inorder(inverted_root);
    cout << endl;             //再翻转回来


}