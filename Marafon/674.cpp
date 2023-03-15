#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int cnt = 1;
        int ans = 0;
        if(nums.size() == 1){
            return 1;
        }
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i + 1] > nums[i]){
                cnt++;
            }
            else{
                
                cnt = 1;
            }
            ans = max(cnt, ans);

        }
        return ans;
        
    }
};







class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0;
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                cnt++;
            }
            else{
                ans = max(cnt, ans);
                cnt = 0;
            }
        }
        return max(ans, cnt);
    }
};