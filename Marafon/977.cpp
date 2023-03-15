#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n= nums.size();
        for(int i=0;i<n;i++){
            nums[i] = nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};


class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector <int> ans;
        int l = 0;
        int r = nums.size() - 1;
        while(l <= r){
            if(nums[r] > nums[l]){
                ans.push_back(nums[r] * nums[r]);
                r--;
            }
            else{
                ans.push_back(nums[l] * nums[l]);
                l++;
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};