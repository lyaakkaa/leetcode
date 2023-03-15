#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int l = 0;
        int r = nums.size() - 1;
        while(l <= r){
            int m = l + (r - l) / 2;
            if(nums[m] == target){
                return true;
            }
            if(nums[m] < target){
                l = m + 1;
            }
            else{
                r = m - 1;
            }
        }
        return false;
    }
};