#include <bits/stdc++.h>
using namespace std;


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
// class Solution {
// public:
//     bool isSymmetric(TreeNode* root) {
//         return (root == NULL || issymmetricalhelp(root->left, root->right));
        
//     }
//     bool issymmetricalhelp(TreeNode *left, TreeNode *right){
//         if(left == NULL && right == NULL){
//             return true;
//         }
//         if(left == NULL || right == NULL){
//             return false;
//         }
//         if(left-> val != right -> val){
//             return false;
//         }
//         return(issymmetricalhelp(left->left,right->right)&& issymmetricalhelp(left->right,right->left));

//     }
// };