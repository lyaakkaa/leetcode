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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head == NULL){
            return NULL;
        }
        vector <int> v;
        while(head != NULL){
            v.push_back(head->val);
            head = head->next;
        }

        swap(v[k - 1], v[v.size() - k]);
        ListNode *ans = new ListNode(-1);
        ListNode *res = ans;

        for(int i = 0; i < v.size(); i++){
            ans->next = new ListNode(v[i]);
            ans = ans->next;
        }
        return res->next;

    }
};







class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode * left = head, * right = head, * curr = head;
        int i = 1;
        while(curr != NULL){
            if(i < k) left = left -> next;
            if(i > k) right = right -> next;
            curr = curr -> next;
            i++;
        }
        swap(left -> val, right -> val);
        return head;

    }
};