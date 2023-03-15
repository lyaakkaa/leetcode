// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         unordered_map<int,int> hash_table;
//         int max_freq=0;
//         int element;
//         for(auto i=0;i<nums.size();i++)
//         {
//             hash_table[nums[i]]++;
            
//             if(hash_table[nums[i]]>max_freq)
//             {
//                 max_freq= hash_table[nums[i]];
//                 element=nums[i];
//             }
            
//         }
        
//         return element;
    
//     }
// };