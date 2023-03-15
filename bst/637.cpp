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
    vector<double> averageOfLevels(TreeNode* root) {
        if(root == NULL){
            return {};
        }
        queue <TreeNode*> q;
        q.push(root);
        vector <double> ans;
        
        while(!q.empty()){
            int sz = q.size();
            double sum = 0;
            for(int i = 0; i < sz; i++){
                TreeNode *node = q.front();
                q.pop();
                sum += node->val;
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
                
            }
            ans.push_back(sum / sz);
        }
        return ans;

    }
};








class Solution {
public:
    void doDFS(TreeNode* root,vector<double> &sum,vector<double> &count,int i)
    {        
        if(root == NULL)
            return;
        
        if(sum.size()<=i)
        {
            sum.push_back(root->val);
            count.push_back(1);
        }
        else
        {
            sum[i] += root->val;
            count[i]++;
        }
         
         doDFS(root->left,sum,count,i+1);
         doDFS(root->right,sum,count,i+1);
    }
    
    vector<double> averageOfLevels(TreeNode* root) {
        
        
        vector<double> sum,count,ans;
        
        doDFS(root,sum,count,0);
        
        for(int i=0;i<sum.size();i++)
        {
            ans.push_back(sum[i]/count[i]);
        }
        return ans;
    }
};