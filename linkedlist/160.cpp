// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         int sizeA = 0, sizeB = 0;
//         ListNode * curA = headA;
//         ListNode * curB = headB;
//         while(curA != NULL){
//             sizeA++;
//             curA = curA -> next;
//         }
//         while(curB != NULL){
//             sizeB++;
//             curB = curB -> next;
//         }
//         int dif = abs(sizeA - sizeB);
//         curA = headA;
//         curB = headB;
//         if (sizeA > sizeB){
//             while(dif > 0){
//                 curA = curA -> next;
//                 dif--;
//             }
//         }
//         else{
//             while(dif > 0){
//                 curB = curB -> next;
//                 dif--;
//             }
//         }
//         while(curA != curB){
//             curA = curA -> next;
//             curB = curB -> next;
//             if(curA == NULL || curB == NULL) return NULL;
//         }
//         return curA;
//     }
// };


// ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         if(headA == NULL || headB==NULL) 
//             return NULL;
        
//         ListNode *tempA = headA, *tempB = headB;
        
//         while(tempA != tempB)
//         {
//             tempA = tempA->next;
//             tempB = tempB->next;
            
//             if(tempA==tempB)
//                 return tempA;
            
//             if(tempA == NULL)
//                 tempA = headB;
            
//             if(tempB == NULL)
//                 tempB = headA;
//         }
        
//         return tempA;
//     }


// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         ListNode *l1 = headA;
//         ListNode *l2 = headB;
//         while(l1 != l2){
//             l1 ? l1 = l1->next : l1 = headB;
//             l2 ? l2 = l2->next : l2 = headA;
//         }
//         return l1;
//     }
// };