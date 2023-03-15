#include <bits/stdc++.h>
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };


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
    TreeNode* sortedListToBST(ListNode* head) {
        ListNode *cur = head;
        vector <int> v;
        while(cur != NULL){
            v.push_back(cur->val);
            cur = cur->next;
        }
        return constructBST(0, v.size() - 1, v);

    }
    TreeNode* constructBST(int l,int r ,vector<int> v){
        if(l > r) return NULL;
        int m = l + (r - l) / 2;
        TreeNode *root = new TreeNode(v[m]);
        root->left = constructBST(l, m - 1, v);
        root->right = constructBST(m + 1, r, v);
        return root;
    }
};