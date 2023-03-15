#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int missingNumber(vector<int>& nums){

        sort(nums.begin(), nums.end());
        int l = 0; 
        int r = nums.size();
        
        while(l <= r){
            int m = l + (r - l) / 2;
            if(m >= nums.size()) break;
            if(nums[m] == m) l = m + 1;
            else if (nums[m] > m) r = m - 1;

        }
        return l;
    }
};



class Solution {
public:
    int missingNumber(vector<int>& nums){
        vector <int>  h(nums.size() + 1, 0);
        for(int i = 0; i < nums.size(); i++){
            h[nums[i]] = 1;
        }
        int ans;
        for(int i = 0; i < nums.size();i++){
            if(h[i] == 0){
                ans = i;
            }
        }
        return ans;
    }
};

