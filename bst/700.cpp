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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == NULL){
            return root;
        }
        if(root->val == val){
            return root;
        }
        if(root->val < val){
            return searchBST(root->right, val);
        }
        return searchBST(root->left, val);
    }
    
};

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        while(root != NULL && root->val != val){
            if(root->val > val){
                root = root->left;
            }
            else{
                root = root->right;
            }
        }
        return root;
    }
};


class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode *cur = root;

        while(cur != NULL){
            if(cur->val == val){
                return cur;
            }
            if(cur->val < val){
                cur = cur->right;
            }
            else{
                cur = cur->left;
            }
        }
        return cur;
    }
};




class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == NULL){
            return root;
        }
        queue <TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int sz = q.size();

            for(int i = 0; i < sz; i++){
                TreeNode *node = q.front();
                q.pop();
                if(node->val == val){
                    return node;
                }
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }

        }
        return NULL;
        
    }
};