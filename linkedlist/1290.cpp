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
    int getDecimalValue(ListNode* head) {
        if(head == NULL){
            return 0;
        }
        int cnt = 0;
        int ans = 0;
        ListNode *cur = head;

        while(cur != NULL){
            cnt++;
            cur = cur->next;
        }
        cur= head;
        while(cur != NULL){
            ans += cur->val * pow(2, cnt - 1);
            cnt--;
            cur = cur->next;
        }
        return ans;
    }
};





int getDecimalValue(ListNode* head) {
      int sum = 0;
      while(head){
          sum = sum * 2 + head -> val;
          head = head->next;
      }
      return sum;
}




// -----> Optimal using bit manipulation
int getDecimalValue(ListNode* head) {
      int sum = 0;
      while(head){
          sum <<= 1; // '<<' left shift operator ~ sum = sum * 2^1
          sum |= head->val; // '|' is logical OR operator
          head = head -> next;
      }
      return sum;
}
