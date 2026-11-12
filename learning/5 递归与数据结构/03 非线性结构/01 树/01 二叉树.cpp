//
// Created by Drench_Moon on 2026/10/27.
//
#include<iostream>
using namespace std;


//二叉树的表示方法，通过递归语言定义
struct TreeNode {               // 定义数据类型树节点     (数据类型即int, double...)
    int val;                    // 每个节点都需要存一个值


    // 定义子节点如果不用指针会无限定义, 内存趋向无穷. 而指针默认8字节(64位系统), 不管存什么都是8字节

    TreeNode* left;             // 延伸左孩子，同时是下一个父节点
    TreeNode* right;            // 延伸右孩子，同时是下一个父节点
    //如上, 即为递归定义


    //构造一个无返回值函数, 函数类型是TreeNode(不是void)
    //"构造函数", 初始化值, 并默认左右子为空
    TreeNode(int v) : val(v), left(nullptr), right(nullptr) {}
};

int main() {

    // 手动搭这棵树：
    //       1
    //     /   \
    //    2     3
    //   / \     \
    //  4   5     7


    //  定义根节点也同理, 只能用指针表示自指内存, 否则内存区域无穷, 用 new 不能获得申请的内存大小
    //  同时, 如果只是定义一个变量, 就不能改值, 只能改变拷贝的副本
    //  而如果通过引用, 就不能换绑
    //  建立树时需要逐步拼接, 改变指向
    //  一个值或者引用不能表示 空 子节点

    TreeNode* root = new TreeNode(1);
    //root是在栈上的一个地址节点的指针, 指向这个通过new获得的堆上的节点(根节点)
    //用new获得堆内存, 防止爆栈内存过大
    //并调用构造函数, 让root指向的节点初始化


    root -> left = new TreeNode(2);       //定义root的左子节点
    root -> right = new TreeNode(3);      //定义root的右子节点


    root -> left -> left = new TreeNode(4);     //root的left节点的left节点
    root -> left -> right = new TreeNode(5);    //root的left节点的right节点
    root -> right -> right = new TreeNode(7);   //root的right节点的right节点
}