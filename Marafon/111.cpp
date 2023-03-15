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
//     int minDepth(TreeNode* root) {
//         if(root == NULL){
//             return 0;
//         }
//         else if (root->left == NULL && root->right != NULL)
//         {
//             return 1 + MinDepth(root->right);
//         }
//         else if (root->left != NULL && root->right == NULL)
//         {
//             return 1 + MinDepth(root->left);
//         }
//         else 
//         {
//             return 1 + min(MinDepth(root->left), MinDepth(root->right));
//         }

        
//     }
// };



// int ans = 0;
// int dfs(TreeNode* root){
    
//     if(!root)
//         return INT_MAX;
    
//     if(!root->left && !root->right)
//         return 1;
    
//     return 1 + min(dfs(root->left), dfs(root->right));
// }
// int minDepth(TreeNode* root) {
    
//     if(!root)
//         return 0;
//     return dfs(root);
// }








// int ans = 1;
// void bfs(TreeNode* root){
    
//     if(!root){
//         return;
//     }
    
//     queue<TreeNode*> q;
//     q.push(root);
    
//     while(!q.empty()){
        
//         int size = q.size();
        
//         for(int i = 0; i < size; i++){
            
//             TreeNode* temp = q.front();
//             q.pop();
            
//             if(!temp->left && !temp->right)
//                 return;
//             if(temp->left)
//                 q.push(temp->left);
//             if(temp->right)
//                 q.push(temp->right);
            
//         }
        
//         ans++;
//     }

// }
// int minDepth(TreeNode* root) {
    
//     if(!root)
//         return 0;
//     bfs(root);
//     return ans;
// }};