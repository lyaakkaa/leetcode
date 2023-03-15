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
    bool isValidBST(TreeNode* root) {
        if(root == NULL){
            return true;
        }
        return isOk(root,LONG_MIN,LONG_MAX);
    }
    bool isOk(TreeNode *node, long long left, long long right){
        if(node == NULL){
            return true;
        }
        if(node->val >= right || node->val <= left){
            return false;
        }
        return isOk(node->left, left, node->val) && isOk(node->right, node->val, right);  
    }
};









class Solution {
public:
    bool isValidBST(TreeNode* root) {
        if(root == NULL){
            return true;
        }
        queue <Qnode> q;
        q.push(Qnode{root, LONG_MIN, LONG_MAX});
        while(!q.empty()){
            int sz = q.size();
            for(int i = 0; i < sz; i++){
                Qnode cur = q.front();
                q.pop();
                TreeNode *node = cur.node;
                if(node == NULL){
                    return true;
                }
                if(node->val <= cur.lower || node->val >= cur.upper){
                    return false;
                }
                if(node->left){
                    q.push(Qnode{node->left, cur.lower, node->val});
                }
                if(node->right){
                    q.push(Qnode{node->right, node->val, cur.upper});
                }
            }
            
        }
        return true;
    }
    struct Qnode {
        TreeNode *node;
        long long lower, upper;
    };
    
};



