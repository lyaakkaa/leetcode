
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *res = new ListNode(0);
        ListNode *cur = res;
        while(true){
            if(list1 == NULL && list2 == NULL){
                return res->next;
            }
            else if(list1 == NULL){
                cur -> next = list2;
                return res->next;
            }
            else if(list2 == NULL){
                cur->next = list1;
                return res->next;
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





class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *res = new ListNode(0);
        ListNode *curr = res;

        while(list1 != NULL && list2 != NULL){
            if(list1->val > list2->val){
                res->next = list2;
                list2 = list2->next;
            }
            else{
                res->next = list1;
                list1 = list1->next;
            }
            res = res->next;
        }
        if(list1 != NULL){
            res->next = list1;
        }
        if(list2 != NULL){
            res->next = list2;
        }
        return curr->next;
    }
};


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL){
            return list2;
        }
        if(list2 == NULL){
            return list1;
        }
        if(list1->val < list2->val){
            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        }
        else{
            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        }
    }
};













// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       
// 	    // if list1 happen to be NULL
// 		// we will simply return list2.
//         if(list1 == NULL)
//             return list2;
		
// 		// if list2 happen to be NULL
// 		// we will simply return list1.
//         if(list2 == NULL)
//             return list1;
        
//         ListNode * ptr = list1;
//         if(list1 -> val > list2 -> val)
//         {
//             ptr = list2;
//             list2 = list2 -> next;
//         }
//         else
//         {
//             list1 = list1 -> next;
//         }
//         ListNode *curr = ptr;
        
// 		// till one of the list doesn't reaches NULL
//         while(list1 &&  list2)
//         {
//             if(list1 -> val < list2 -> val){
//                 curr->next = list1;
//                 list1 = list1 -> next;
//             }
//             else{
//                 curr->next = list2;
//                 list2 = list2 -> next;
//             }
//             curr = curr -> next;
                
//         }
		
// 		// adding remaining elements of bigger list.
//         if(!list1)
//             curr -> next = list2;
//         else
//             curr -> next = list1;
            
//         return ptr;
       
//     }
// };