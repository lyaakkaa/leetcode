
 
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode res(0);
        ListNode *cur = &res;
        while(true){
            if(list1 == NULL && list2 == NULL){
                return res.next;
            }
            else if(list1 == NULL){
                cur -> next = list2;
                return res.next;
            }
            else if(list2 == NULL){
                cur->next = list1;
                return res.next;
            }
            else{
                if(list1->val < list2->val){
                    cur -> next = list1;
                    cur = list1;
                    list1 = list1->next;
                    
                }
                else{
                    cur -> next = list2;
                    cur = list2;
                    list2 = list2->next;
                }
            }
        } 
    }
};