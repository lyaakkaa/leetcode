#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map <int,int> mp;
        int maxi = -9999;
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
            if(mp[nums[i]] > maxi){
                maxi = mp[nums[i]];
                ans = nums[i];
            }
        }
        return ans;
    

    }
};