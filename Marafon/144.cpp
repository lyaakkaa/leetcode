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
// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     vector<int> preorderTraversal(TreeNode* root) {
//         vector <int> ans;
//         TreeNode *node = root;
//         travers(node, ans);
//         return ans;
//     }
//     void travers(TreeNode *root, vector <int> &ans){
//         if(root == NULL){
//             return;
//         }
//         ans.push_back(root->val);
//         travers(root->left, ans);
//         travers(root->right, ans);
//     }
// };


// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
//     vector<int> inorderTraversal(TreeNode* root) {
//         vector <int> ans;
//         TreeNode *node = root;
//         travers(node, ans);
//         return ans;

//     }

//     void travers(TreeNode *root, vector <int> &ans){
//         if(root == NULL){
//             return;
//         }
//         travers(root->left, ans);
//         ans.push_back(root->val);
//         travers(root->right, ans);
//     }
// };

