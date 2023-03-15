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
    bool isUnivalTree(TreeNode* root) {
        if(root == NULL){
            return true;
        }
        set <int> st;
        inOrder(root, st);
        return st.size() == 1;
    }

    void inOrder(TreeNode *root, set <int> &st){
        if(root == NULL){
            return;
        }
        inOrder(root->left, st);
        st.insert(root->val);
        inOrder(root->right, st);
    }
};



class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        return helper(root, root->val);
    }

    bool helper(TreeNode *root, int val){
        if(root == NULL){
            return true;
        }
        bool l = helper(root->left, val);
        bool r = helper(root->right, val);
        if(root->val != val){
            return false;
        }
        return l && r;
    }  
};



class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        if(root == NULL){
            return true;
        }
        queue <TreeNode *> q;
        q.push(root);
        while(!q.empty()){
            TreeNode *node = q.front();
            q.pop();

            if(node->val != root->val){
                return false;
            }
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }
        return true;
    }
};









