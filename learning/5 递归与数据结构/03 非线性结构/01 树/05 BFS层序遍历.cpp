//
// Created by Drench_Moon on 2026/11/3.
//

//本节内容与    05 queue经典用法（BFS层序遍历）   相同




// 一共3步:
// 1: 根节点入队, 该步骤需要手动开启循环
// 2: 循环处理: 记录队首数据, 弹出队首, 记录子节点, 直到队列为空

#include<iostream>
#include<queue>
#include<vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int v) : val(v), left(nullptr), right(nullptr) {}
};


vector<int> BFS(TreeNode* root) {    //返回值是一个数组的函数, 如果用声明a并赋值为这个函数的返回值，a就是一个动态数
                                            //也可以直接用无返回值函数来直接打印

    vector<int> res;                        //声明一个用于返回的容器
    if (!root) {
        return res;                         //指针为空就返回空数组
    }
    queue<TreeNode*> q;                     //声明一个存储节点指针的队列q, q是用来处理节点的, 而且只能用队列来处理
    q.push(root);                           //将根节点存入队列

    while (!q.empty()) {                    //只要q不为空就继续处理, 如果q不为空就要继续把q中的节点值压入栈中
        TreeNode* x = q.front();            //取队首, 获得队首的值, 然后删除队首, 对之后的节点处理
        res.push_back(x -> val);
        q.pop();

        //先把左右孩子入队, 之后处理左右孩子的左右孩子的时候, 上一层的左右孩子还在队首, 获取值就能获取到每层的所有
        //比如以main函数内部的树举例：
        //第一次循环: 取root(手动录入), 存入1, 弹出, 再把root在第二层的左右节点存入, 此时队列里为(用值表示) 2, 3
        //第二次循环: 取值为 2 的节点, 存入2, 弹出, 把2节点下的子节点4,5存入队列, 此时队列里为 3, 4, 5
        //第三次循环: 取值为 3 的节点, 存入3, 弹出, 把3节点下的子节点6存入队列, 此时队列里为4, 5, 6
        //第四次循环: 取值为 4 的节点, 存入4, 弹出, 把4节点下的子节点7存入队列, 此时队列里为5, 6, 7
        //第五次循环: 取值为 5 的节点, 存入5, 弹出, 5节点没有子节点, 此时队列里为6, 7
        //第六次循环: 取6, 无子节点, 弹出, 队列剩7
        //第七次循环: 获得7, 队列为空, 不再满足循环条件, 不能再进行循环, 循环结束, res里是1, 2, 3, 4, 5, 6, 7, 返回res获得结果


        if (x -> left) {                    //如果有左孩子, 就把左孩子入队
            q.push(x -> left);
        }
        if (x -> right) {                   //如果有右孩子, 就把右孩子入队
            q.push(x -> right);
        }
    }
    return res;
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
    root -> left -> left -> left= new TreeNode(7);


    vector<int> con = BFS(root);
    for (const int i : con) {
        cout << i << " ";
    }

}