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
    ListNode* reverseList(ListNode* head) {

        ListNode *cur = head;
        ListNode *next = NULL;
        ListNode *prev = NULL;

        while(cur != NULL){
            next = cur -> next;
            cur -> next = prev; //меняем стрелочку в противоположную сторону 
            prev = cur;
            cur = next;
        }
        head = prev;
        return head;
        
    }
};

// void reversePRO(){
//         Node * next = nullptr;
//         Node * prev = nullptr;
//         Node * cur = head;
//         while(cur != nullptr){
//             next = cur -> next;
//             cur -> next = prev;
//             prev = cur;
//             cur = next;
//         }
//         head = prev;
//     }