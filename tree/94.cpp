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
        vector <int> ans;
        stack <TreeNode*> st;
        TreeNode *node = root;

        while(node || st.size()){
            if(node){
                st.push(node);
                node = node -> left;
            }
            else{
                ans.push_back(st.top()->val);
                node = st.top() -> right;
                st.pop();
            }
        }
        return ans;
    }
};