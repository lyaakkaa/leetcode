#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector <int> ans;
        int first_oc = first(nums, target);
        int last_oc = last(nums, target);

        for(int i = first_oc; i <= last_oc; i++){
            if(i != -1){
                ans.push_back(i);
            }
        }
        return ans;
        
    }
    int first(vector <int> &nums, int x){
        int l = 0;
        int r = nums.size() - 1;
        int res = -1;

        while(l <= r){
            int m = l + (r - l) / 2;
            if(nums[m] > x){
                r = m - 1;
            }
            else if(nums[m] < x){
                l = m + 1;
            }
            else{
                res = m;
                r = m - 1;
            }
        }
        return res;
    }
    int last(vector <int> &nums, int x){
        int l = 0;
        int r = nums.size() - 1;
        int res = -1;

        while(l <= r){
            int m = l + (r - l) / 2;

            if(nums[m] > x){
                r = m - 1;
            }
            else if(nums[m] < x){
                l = m + 1;
            }
            else{
                res = m;
                l = m + 1;
            }
        }
        return res;
    }
};


