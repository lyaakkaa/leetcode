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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector <vector<int>> ans;
        if(root == NULL){
            return {};
        }
        queue <TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int sz = q.size();
            vector <int> v;
            for(int i = 0; i < sz; i++){
                TreeNode *node = q.front();
                q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                v.push_back(node->val);
            }
            ans.push_back(v);
            
        }
        return ans;
    }
};






class Solution {
public:
vector <vector<int>> ans;
    void dfs(int level, TreeNode *node){
        if(node == NULL){
            return;
        }
        if(ans.size() < level + 1) ans.push_back({});
        ans[level].push_back(node->val);
        dfs(level + 1, node->left);
        dfs(level + )
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        
    }
};