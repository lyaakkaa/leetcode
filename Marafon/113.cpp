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
vector<vector<int>> ans;
vector <int> path;
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        dfs(root, 0, targetSum);
        return ans;
    }

    void dfs(TreeNode *root, int cur, int tar){
        if(root == NULL){
            return;
        }
        cur += root->val;
        path.push_back(cur);

        if(cur == tar && root->left != NULL && root->right != NULL){
            ans.push_back(path);
        }
        dfs(root->left, cur, tar);
        dfs(root->right, cur, tar);

        path.pop_back();

    }
};