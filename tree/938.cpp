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
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root == NULL){
            return NULL;
        }
        vector <int> vec;
        inOrder(root, vec);

        int ans = 0;
        for(int i= 0; i < vec.size(); i++){
            if(vec[i] <= high && vec [i] >= low){
                ans += vec[i];
            }
        }
        return ans;  
    }

    void inOrder(TreeNode *node, vector <int> &v){
        if(node == NULL){
            return;
        }
        inOrder(node->left, v);
        v.push_back(node->val);
        inOrder(node->right, v);
    }
};







class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root == NULL){
            return  0;
        }
        int ans = 0;
        if(low <= root->val && high >= root->val){
            ans += root->val;
        }
        return ans + rangeSumBST(root->left, low, high) + rangeSumBST(root->right, low, high);
    }    
};









class Solution {
public:
    void dfs(TreeNode* root, int low, int high, int& sum){
        if(!root) return ;
        if(root->val >= low && root->val <= high) sum+=root->val;
        dfs(root->left, low, high, sum);
        dfs(root->right, low, high, sum);
    }
    
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum=0;
        dfs(root, low, high, sum);
        return sum;
    }
};




class Solution {
    int ans=0;
public:
    int inorder(TreeNode* root,int low,int high) {
        if(!root){
            return ans;
        }
        inorder(root->left,low,high);
        if(root->val>=low && root->val<=high) {
            ans+=(root->val);
        }
        inorder(root->right,low,high);
        return ans;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        ans=inorder(root,low,high);
        return ans;
    }
};
