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
    vector<int> inorderTraversal(TreeNode* root) {
        vector <int> ans;
        TreeNode *node = root;
        travers(node, ans);
        return ans;

    }

    void travers(TreeNode *root, vector <int> &ans){
        if(root == NULL){
            return;
        }
        travers(root->left, ans);
        ans.push_back(root->val);
        travers(root->right, ans);
    }
};








class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> s;
        vector<int> ans;
        TreeNode * node = root;
        while(true){
            if(node != NULL){
                s.push(node);
                node = node->left;
            }else{
                if(s.empty()) break;
                node = s.top(); s.pop();
                ans.push_back(node->val);
                node = node->right;
            }
        }
        return ans;
    }
};