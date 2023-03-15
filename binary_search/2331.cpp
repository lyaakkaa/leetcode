#include <bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     bool evaluateTree(TreeNode* root) {
//         if(root == NULL){
//             return true;
//         }

//         bool left = evaluateTree(root->left);
//         bool right = evaluateTree(root->right);

//         if(root->val == 3){
//             return (left && right);
//         }
//         else if(root->val == 2){
//             return (left || right);
//         }
//         return root->val;
        
//     }
// };