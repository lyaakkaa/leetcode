// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {

//         sort(nums.begin(), nums.end());

//         int ans = nums.size();


//         for(int i = 0; i < nums.size(); i++){
//             if(nums[i] != i){
//                 ans = i;
//                 break;
//             }
//         }
//         return ans;
        
//     }
// };


// class Solution {
// public:
//     int missingNumber(vector<int>& nums){

//         sort(nums.begin(), nums.end());
//         int l = 0; 
//         int r = nums.size();
        
//         while(l <= r){
//             int m = l + (r - l) / 2;
//             if(m >= nums.size()) break;
//             if(nums[m] == m) l = m + 1;
//             else if (nums[m] > m) r = m - 1;

//         }
//         return l;
        
//     }
// };



