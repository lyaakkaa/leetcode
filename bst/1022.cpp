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

    int sumRootToLeaf(TreeNode* root) {
        
        if(root == NULL){
            return 0;
        }
        vector <vector<int>> ans = paths(root);
        int answer = 0;
        int sum = 0;

        for(int i = 0; i < ans.size(); i++){
            sum = bin_to_dec(ans[i]);
            answer += sum;
        }
        return answer;


    }

    int bin_to_dec(vector <int> vec){
        int sum = 0;
        int k = vec.size();
        for(int i = 0; i < vec.size(); i++){
            sum += vec[i] * pow(2, k);
            k--;
        }
        return sum;
    }

    void helper(TreeNode *root, vector <int> arr, vector <vector<int>> &ans){
        if(root == NULL){
            return;
        }
        arr.push_back(root->val);
        if(root->left == NULL && root->right == NULL){
            ans.push_back(arr);
            return;
        }
        helper(root->left, arr, ans);
        helper(root->right, arr, ans);
    }

    vector <vector<int>> paths(TreeNode *node){
        vector <vector<int>> ans;

        if(node == NULL){
            return ans;
        }
        vector <int> arr;
        helper(node, arr, ans);
        return ans;
    }

};






class Solution {
public:
    int ans = 0;
    void solve(TreeNode *root, int buff){
        buff = buff * 2 + root->val;

        if(root->left == NULL && root->right == NULL){
            ans += buff;
            return;
        }
        if(root->left) solve(root->left, buff);
        if(root->right) solve(root->right, buff);
    }

	int sumRootToLeaf(TreeNode* root) {

        solve(root, 0);
        return ans;

	}
};