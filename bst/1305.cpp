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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector <int> ans;
        inOrder(root1, ans);
        inOrder(root2, ans);
        quicksort(0, ans.size() - 1, ans);
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

    void quicksort(int l, int r, vector <int> &v){
        int i = l;
        int j = r;
        int p = v[l + (r - l) / 2];

        while(i < j){
            while(v[i] < p) i++; //пока не найдем элемент который больше пивота
            while(v[j] > p) j--;//пока не найдем элемент который меньше пивота
            if(i <= j){
                swap(v[i], v[j]);
                i++;//двигаем дальше
                j--;
            }
        
        }
        if(l < j){   //хотя бы два элемента есть между ними
            quicksort(l, j, v);
        }  
     
        if (i < r){   //хотя бы два элемента есть между ними
            quicksort(i, r, v);
        }
    }
};





class Solution {
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector <int> v1, v2;
        vector <int> ans;
        inOrder(root1, v1);
        inOrder(root2, v2);
        int i = 0;
        int j = 0;

        while(i < v1.size() && j < v2.size()){
            if(v1[i] <= v2[j]){
                ans.push_back(v1[i]);
                i++;
            }
            else{
                ans.push_back(v2[j]);
                j++;
            }
        }

        while(i < v1.size()){
            ans.push_back(v1[i]);
            i++;
        }
        while(j < v2.size()){
            ans.push_back(v2[j]);
            j++;
        }

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