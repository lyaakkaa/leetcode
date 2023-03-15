
//  struct TreeNode {
//       int val;
//       TreeNode *left;
//       TreeNode *right;
//       TreeNode() : val(0), left(nullptr), right(nullptr) {}
//       TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//       TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//   };


// class Solution {
// public:
//     TreeNode *findMaxi(TreeNode * cur) {
//         while(cur -> right != nullptr)
//             cur = cur -> right;
//         return cur;
//     }
//     TreeNode *remove(TreeNode * cur, int val){
//         if (cur == nullptr) return nullptr;
        
//         if (val > cur -> val) cur -> right = remove(cur -> right, val);
//         else if (val < cur -> val) cur -> left = remove(cur -> left, val);
//         else{
//             if (cur -> left == NULL and cur -> right == NULL) cur = NULL;
//             else if (cur -> right == NULL) cur = cur -> left;
//             else if (cur -> left == NULL) cur = cur -> right;
//             else{
//                 TreeNode *minRight = findMaxi(cur -> left);
//                 cur -> val = minRight -> val;
//                 cur -> left = remove(cur -> left, minRight -> val);
//             }
//         }
//         return cur;
//     }
    
//     TreeNode* deleteNode(TreeNode* root, int key) {
//             return remove(root, key);

//     }
// };

// Node *findMin(Node *node){
//         while (node->left != NULL){
//             node = node -> left;
//         }
//         return node;

//     }
    
//     Node *findMax(Node *node){
//         while (node->right != NULL){
//             node = node->right;
//         }
//         return node;
//     }

//     Node *deleteNode(Node *node, int data){
//         if (node == NULL){
//             return NULL;
//         }
//         if (data < node->data){
//             node->left = deleteNode(node->left, data);
//         }
//         else if (data > node->data){
//             node->right = deleteNode(node->right, data);
//         }
//         else{
//             if (node->left == NULL and node->right == NULL){
//                 return NULL;
//             }
//             else if (node->left == NULL){
//                 node = node->right;
//             }
//             else if (node->right == NULL){
//                 node = node->left;
//             }
//             else{
//                 Node *tmp = findMax(node->left);
//                 node->data = tmp->data;
//                 node->left = deleteNode(node->left,tmp->data);
//             }
//         }
//         return node;
//     }