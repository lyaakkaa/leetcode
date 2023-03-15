// class Solution {
// public:
//     ListNode* sortList(ListNode* head) {
//         if(head == NULL || head->next == NULL) return head ;
    
//     ListNode* slow = head ;
//     ListNode*fast = head->next ;

//     while(fast!=NULL && fast->next!=NULL){
//         slow = slow->next ;
//         fast =fast->next->next ;
//     }
//     ListNode*h2 = slow->next ;
//     slow->next =NULL ;
    
//     head = sortList(head) ;
//     h2 = sortList(h2) ; 
    
//     return joinll(head , h2) ;
// }
        
        
//     ListNode* joinll(ListNode* h1, ListNode* h2){
//     if(h1 == NULL) return h2 ;
  
//     if(h2 == NULL) return h1 ;
    
    
//     ListNode * head ;
//     ListNode * tail ;
    
//     if(h1->val <= h2->val){
//         head = h1 ;
//         tail = h1 ;
//         h1=h1->next ;
//     }
//     else{
//         head = h2 ;
//         tail = h2 ;
//         h2=h2->next ;
    
//     }
    
//     while(h1!=NULL && h2!=NULL){
//         if(h1->val <= h2->val){
//             tail->next = h1 ;
//             tail = h1 ;
//             h1=h1->next ;     
//         }
//         else{
//             tail->next = h2 ;
//             tail = h2 ;
//             h2=h2->next ;
//         }
//     }
    
//     if(h1==NULL) tail->next = h2 ;
//     else tail->next = h1 ; 
    
//     return head ;
// }

// };