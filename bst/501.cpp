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
// map <int, int> mp;
//     vector<int> findMode(TreeNode* root) {
//         vector <int> res;
//         inOrder(root);
//         int maxi = -9999;

//         map <int, int> :: iterator it;
//         for(it = mp.begin(); it != mp.end(); it++){
//             if(it->second > maxi){
//                 maxi = it->second;
//             }
//         }
//         for(it = mp.begin(); it != mp.end(); it++){
//             if(it->second == maxi){
//                res.push_back(it->first);
//             }
//         }
//         return res;
  
//     }
//     void inOrder(TreeNode *node){
//         if(node == NULL){
//             return;
//         }
//         inOrder(node->left);
//         mp[node->val]++;
//         inOrder(node->right);
//     }
    
// };