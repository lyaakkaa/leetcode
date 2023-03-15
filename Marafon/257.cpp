/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

#include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     vector<string> binaryTreePaths(TreeNode* root) {
//         vector <string> ans;
        
//         if(root == NULL){
//             return ans;
//         }
//         string s = to_string(root -> val);
//         if(root->left == NULL && root->right == NULL){
//             ans.push_back(s);
//         }
//         if(root->left != NULL){
//             dfs(s, root->left, ans);
//         }
//         if(root->right != NULL){
//             dfs(s, root->right, ans);
//         }
//         return ans;
//     }

//     void dfs(string s, TreeNode *root, vector <string> &ans){
//         s += "->" + to_string(root->val);

//         if(root->left == NULL && root->right == NULL){   
//             ans.push_back(s);
//             return;
//         }
//         if(root->left != NULL){
//             dfs(s, root->left, ans);
//         }
//         if(root->right != NULL){
//             dfs(s, root->right, ans);
//         }
//     }
// };