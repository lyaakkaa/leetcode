#include <bits/stdc++.h>
using namespace std;


  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    int pairSum(ListNode* head) {
        if(head == NULL){
            return 0;
        }
        vector <int> v;
        ListNode *cur = head;
        while(cur != NULL){
            v.push_back(cur->val);
            cur = cur ->next;
        }
        int sum = 0;
        vector <int> ans;
        int maxi = -999;
        for(int i = 0; i < v.size() / 2; i++){
            sum = v[i] + v[v.size() - 1 - i];
            if(sum > maxi){
                maxi = sum;
            }
            sum = 0;

        }
        return maxi;
        
        
    }
};