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
vector <int> nextLargerNodes(ListNode *head) {
    ListNode *cur = head;
    ListNode *cur1 = head;
    vector <int> ans;

    while(cur != NULL){
        cur1 = cur->next;

        while(cur1 != NULL){
            if(cur1->val > cur->val){
                ans.push_back(cur1->val);
                break;
            }
            cur1 = cur1->next;
            if(cur1 == NULL){
                ans.push_back(0);
            }

        }
        cur = cur->next;
    }
    ans.push_back(0);
    return ans;
    }
};


class Solution {
public:
vector <int> nextLargerNodes(ListNode *head) {
    ListNode *cur = head->next;
    stack <int> st;
    vector <int> ans;
    st.push(head->val);

    while(cur != NULL){
        if(!st.empty()){
            if(cur->val > st.top()){
                ans.push_back(cur->val);
                st.top();
                st.push(cur->val);
            }
            else{
                cur = cur->next;
            }
        }
        else{
            ans.push_back(0);
        }


    }
    return ans;
}
};