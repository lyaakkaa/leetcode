#include <bits/stdc++.h>
using namespace std;

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };



class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL and q == NULL){
            return true;
        }
        if(p == NULL or q == NULL){
            return false;
        }
        return(p->val == q->val && isSameTree(p->right, q->right) && isSameTree(p->left, q->left));
    }
};



class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL and q == NULL){
            return true;
        }
        if(p == NULL or q == NULL){
            return false;
        }
        queue <TreeNode *> q1;
        queue <TreeNode *> q2;

        if(p != NULL && q != NULL){
            q1.push(p);
            q2.push(q);
        }

        q1.push(p);
        q2.push(q);

        while(!q1.empty() && !q2.empty()){
            TreeNode *node1 = q1.front();
            TreeNode *node2 = q2.front();

        }
    }
};