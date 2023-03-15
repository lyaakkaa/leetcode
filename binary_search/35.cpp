// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {   
//         int l = 0;
//         int r = nums.size() - 1;
//         while (l <= r){
//             int m = l + (r - l) / 2;
            
//             if(nums[m] == target){
//                 return m;
//             }
//             if(nums[m] < target){
//                 l = m + 1;
//             }
//             else{
//                 r = m - 1;
//             }
//         }
//         return l;       
//     }
// };





// int bin_search(vector<int> &a, int k) {
//     int l = 0;
//     int r = a.size() - 1;
//     while (l < r) {
//         //cout << l << " " << r << endl;
//         int m = (l + r) / 2;
//         if (a[m] == k)
//             return m;
//         if (a[m] > k)
//             r = m - 1;
//         else
//             l = m + 1;
//     }
//     if (a[l] == k)
//         return l;
//     return -1;
// }
