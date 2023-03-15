#include <bits/stdc++.h>
using namespace std;



class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};


class Solution {
public:
    int maxDepth(Node* root) {
        if(root == NULL){
            return 0;
        }
        int ans = 0;
        for(auto node : root->children){
            ans = max(maxDepth(node), ans);
        }
        return 1 + ans;   
    }
};


class Solution {
public:
    int maxDepth(Node* root) {
        if(root == NULL){
            return 0;
        }
        queue <Node *> q;
        q.push(root);
        int ans = 0;
        while(!q.empty()){
            int sz = q.size();
            for(int i = 0; i < sz; i++){
                Node *node = q.front();
                q.pop();

                for(auto ch : node->children){
                    q.push(ch);
                }
            }
            ans++;
        }
        return ans;
    }
};